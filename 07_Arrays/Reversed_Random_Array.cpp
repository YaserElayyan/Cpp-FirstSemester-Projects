#include <iostream>
#include <cstdlib>
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
int RandomNumber(int To, int From)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillArrayWithRandoms(int Arr[100], int& Length)
{
	Length = ReadPositiveNumber("Enter The Length Of The Array\n");
	for (int i = 0; i < Length; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int Arr[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}
void CopyReversedArray(int Arr[100],int Arr2[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		Arr2[i] = Arr[Length - 1 - i];
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int Arr[100];
	int Length;
	FillArrayWithRandoms(Arr, Length);
	cout << "Original Array\n";
	PrintArray(Arr, Length);
	int Arr2[100];
	CopyReversedArray(Arr, Arr2, Length);
	cout << "\nReversed Array\n";
	PrintArray(Arr2,Length);
	return 0;
}