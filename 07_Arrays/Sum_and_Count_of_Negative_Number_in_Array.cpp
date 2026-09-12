#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum enPositiveNegative { Positive = 1, Negative = 2 };
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
		Arr[i] = RandomNumber(-100, 100);
	}
}
void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";
}
enPositiveNegative CheckNumber(int Number)
{
	if (Number >= 0)
	{
		return enPositiveNegative::Positive;
	}
	else
	{
		return enPositiveNegative::Negative;
	}
}
int SumNegativeNumbersInArray(int Arr[100], int ArrLength)
{
	int Sum = 0;
	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckNumber(Arr[i]) == enPositiveNegative::Negative)
		{
			Sum += Arr[i];
		}
	}
	return Sum;
}
int CountNegativeNumbersInArray(int Arr[100], int ArrLength)
{
	int Count = 0;
	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckNumber(Arr[i]) == enPositiveNegative::Negative)
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
	cout << "Array Elements is : \n";
	PrintArray(Arr, ArrLength);
	cout << "Sum Of Negative Number in Array : " << SumNegativeNumbersInArray(Arr, ArrLength) << endl;
	cout << "Count Of Negative Number in Array : " << CountNegativeNumbersInArray(Arr, ArrLength) << endl;
	return 0;
}