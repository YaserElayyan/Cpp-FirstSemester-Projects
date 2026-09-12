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
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillArrayWithRandoms(int Arr[100], int Length)
{
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
short FindNumberPositionInArray(int arr[100], int arrLength,int NumberToCheck)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == NumberToCheck)
			return i; 
	}
	return -1;
}

bool IsNumberExist(int Arr[100], int Length, int NumberToCheck)
{
	return (FindNumberPositionInArray(Arr,Length,NumberToCheck) != -1);
}
int main()
{
	srand((unsigned)time(NULL));
	int Length = ReadPositiveNumber("Enter The Length Of The Array\n");
	int Arr[100];
	FillArrayWithRandoms(Arr, Length);
	PrintArray(Arr, Length);
	int NumberToCheck = ReadPositiveNumber("\nEnter The Number You Want To Check\n");
	FindNumberPositionInArray(Arr, Length, NumberToCheck);
	if (IsNumberExist(Arr, Length, NumberToCheck))
	{
		cout << "\nYes, The Number is Found :)\n";
	}
	else
	{
		cout << "\nNo, The Number isn't Found :(\n";

	}
	return 0;
}