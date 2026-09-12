#include <iostream>
#include <cstdlib>
#include <ctime>
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
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
void FillArrayWithElements(int Arr[100], int& ArrLength)
{
	ArrLength = ReadPositiveNumber("Enter The Length Of The Array\n");
	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int Arr[100], int ArrLength)
{
	cout << "Array 1 Elements: \n";
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
}
int CheckNumberToSearch(int Arr[100], int ArrLength, int NumberToCheck)
{
	for (int i = 0; i < ArrLength; i++)
	{
		if (Arr[i] == NumberToCheck)
		{
			return i;
		}
	}
	return -1;
}
void PrintResult (int Arr[100], int ArrLength, int NumberToCheck)
{
	int NumberPosition = CheckNumberToSearch(Arr, ArrLength, NumberToCheck);
	cout << "\nNumber You're Looking For is:\n " << NumberToCheck << endl;
	if (NumberPosition != -1)
	{
		cout << "The number is found :-)\n";
		cout << "The Number Found at Position : " << NumberPosition << "\n";
		cout << "\nThe Number Found its Order : " << NumberPosition + 1 << "\n";
	}
	else
	{
		cout << "The number is not found :-(\n";
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int Arr[100];
	int ArrLength;
	int NumberToCheck;
	FillArrayWithElements(Arr, ArrLength);
	NumberToCheck = ReadPositiveNumber("Enter The Number You're Looking For:\n");
	PrintArray(Arr, ArrLength);
	PrintResult(Arr, ArrLength, NumberToCheck);
	return 0;
}