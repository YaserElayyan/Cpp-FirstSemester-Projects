#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number = 0;
	cout << "Enter a Number Please: \n";
	cin >> Number;
	return Number;
}
void FillArrayWithElements(int Arr[100], int& ArrLength,int Number)
{
	ArrLength++;
	Arr[ArrLength - 1] = Number;
}
void InputNumbersInArray(int Arr[100], int &ArrLength)
{
	bool AddMore = true;
	do
	{
		FillArrayWithElements(Arr, ArrLength, ReadNumber());
		cout << "Do You Want To Add More Elements ? [1]:Yes,[0]:No\n";
		cin >> AddMore;
	} while (AddMore);
}
void PrintArray(int Arr[100], int ArrLength)
{
	cout << "Array Length: " << ArrLength << "\n";
	cout << "Array Elements: ";
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
}
int main()
{
	int Arr[100];
	int ArrLength = 0;
	InputNumbersInArray(Arr, ArrLength);
	PrintArray(Arr, ArrLength);
	return 0;
}