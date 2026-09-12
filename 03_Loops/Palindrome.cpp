#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);

	return Number;
}
void FillArrayWithElements(int Arr[100], int& ArrLength)
{
	ArrLength = ReadPositiveNumber("Enter The Length Of The Array\n");
	for (int i = 0; i < ArrLength; i++)
	{
		cout << "Enter Element[" << i << "]: " << "\n";
		cin >> Arr[i];
	}
	cout << endl;
}
void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";
}
bool IsItPalindromeArray(int Arr[100], int ArrLength)
{
	int Counter = ArrLength - 1;
	for (int i = 0; i < ArrLength/2; i++)
	{
		if (Arr[i] != Arr[Counter])
		{
			return false;
		}
		Counter--;
	}
	return true;
}
void PrintResult(int Arr[100], int ArrLength)
{
	if (IsItPalindromeArray(Arr, ArrLength))
	{
		cout << "Palindrome Array\n";
	}
	else
	{
		cout << "Isn't Palindrome Array\n";
	}
}
int main()
{
	int Arr[100];
	int ArrLength = 0;
	FillArrayWithElements(Arr, ArrLength);
	cout << "Array 1 Elements: \n";
	PrintArray(Arr, ArrLength);
	cout << "Array Status: \n";
	PrintResult(Arr, ArrLength);
	return 0;
}