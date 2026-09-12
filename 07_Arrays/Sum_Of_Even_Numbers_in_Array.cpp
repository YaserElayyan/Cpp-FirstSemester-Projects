#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum enOddEven { Even = 1, Odd = 2 };
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
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}
enOddEven CheckNumber(int Number)
{
	if (Number % 2 == 0)
	{
		return enOddEven::Even;
	}
	else
	{
		return enOddEven::Odd;
	}
}
int SumOfEvenNumbersInArray(int Arr[100], int ArrLength)
{
	int Sum = 0;
	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckNumber(Arr[i]) == enOddEven::Even)
		{
			Sum += Arr[i];
		}
	}
	return Sum;
}
int CountOfEvenNumbersInArray(int Arr[100], int ArrLength)
{
	int Count = 0;
	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckNumber(Arr[i]) == enOddEven::Even)
		{
			Count++;
		}
	}
	return Count;
}
int main()
{
	srand((unsigned)time(NULL));
	int Arr[100];
	int ArrLength = 0;
	FillArrayWithElements(Arr, ArrLength);
	cout << "Array Elements : ";
	PrintArray(Arr, ArrLength);
	cout << "Even Numbers Sum is: " << SumOfEvenNumbersInArray(Arr, ArrLength) << endl;
	cout << "Count Of Even Number is: " << CountOfEvenNumbersInArray(Arr, ArrLength);
	return 0;
}