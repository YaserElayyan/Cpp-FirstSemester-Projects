#include <iostream>
using namespace std;
void FillArrayWithElements(int Arr[100], int& ArrLength)
{
	ArrLength = 6;
	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 30;
	Arr[4] = 20;
	Arr[5] = 10;

}
void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}
bool IsArrayPalindrome(int Arr[100], int ArrLength)
{
	int Counter = ArrLength-1;
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
		if (IsArrayPalindrome(Arr, ArrLength))
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
	cout << "Array Elements :\n";
	PrintArray(Arr, ArrLength);
	PrintResult(Arr, ArrLength);
	return 0;
}