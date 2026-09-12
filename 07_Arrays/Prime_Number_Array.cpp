#include <iostream>
#include <cmath>
using namespace std;
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
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
enPrimeNotPrime CheckNumberType(int Number)
{
	if (Number <= 1)
		return enPrimeNotPrime::NotPrime;
	int M = Number / 2;
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
		{
			return enPrimeNotPrime::NotPrime;
		}
	}

	return enPrimeNotPrime::Prime;
}
void ReadArray(int Arr[100],int &Length)
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
void ArrayOfPrimeNumbers(int Arr[100], int Arr2[100], int Length, int &Length2)
{
	int Counter = 0;
	for (int i = 0; i < Length; i++)
	{
		if (CheckNumberType(Arr[i]) == enPrimeNotPrime::Prime)
		{
			Arr2[Counter] = Arr[i];
			Counter++;
		}
	}
	Length2 = Counter;
}
int main()
{
	srand((unsigned)time(NULL));
	int Length;
	int Arr[100];
	ReadArray(Arr, Length);
	int Arr2[100];
	int Length2;
	ArrayOfPrimeNumbers(Arr, Arr2, Length, Length2);
	cout << "\nThe Elements Of The Array: \n";
	PrintArray(Arr,Length);
	cout << "\nThe Elements Of Prime Numbers Array: \n";
	PrintArray(Arr2,Length2);
	return 0;
}