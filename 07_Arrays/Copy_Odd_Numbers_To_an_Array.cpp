#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum enOddEven {Odd=1 , Even = 2};
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
int RandomNumber(int From , int To)
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
void PrintArrayElements(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}
void AddArrayElement(int Arr[100], int& ArrLength, int Number)
{
	ArrLength++;
	Arr[ArrLength - 1] = Number;
}
enOddEven CheckNumber(int Number)
{
		if (Number % 2 != 0)
		{
			return enOddEven::Odd;
		}
		else
		{
			return enOddEven::Even;
		}
}
void CopyArrayOddElements(int Arr[100], int Arr2[100], int ArrLength, int& Arr2Length)
{
	//Arr(means The Source Array) Arr2 (The Destination Array)
	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckNumber(Arr[i]) == enOddEven::Odd)
		{
			AddArrayElement(Arr2, Arr2Length, Arr[i]);
		}
	}
}
int main()
{ 
	srand((unsigned)time(NULL));
	int Arr[100];
	int Arr2[100];
	int ArrLength = 0;
	int Arr2Length = 0;
	FillArrayWithElements(Arr, ArrLength);
	cout << "\nArray 1 Elements:\n ";
	PrintArrayElements(Arr, ArrLength);
	cout << "Array 2 Odd Number: \n";
	CopyArrayOddElements(Arr, Arr2, ArrLength, Arr2Length);
	PrintArrayElements(Arr2, Arr2Length);
	return 0;

}