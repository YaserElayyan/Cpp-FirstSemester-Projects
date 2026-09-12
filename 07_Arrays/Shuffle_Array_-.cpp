#include <iostream>
#include <cstdlib>
#include <utility>
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
void Swap(int& A, int& B)
{
	swap(A, B);
}
void FillArrayWithElements(int Arr[100], int& ArrLength)
{
	ArrLength = ReadPositiveNumber("Enter The Length Of The Array\n");
	for (int i = 0; i < ArrLength; i++)
	{
		Arr[i] = i + 1;
	}
}
void PrintArrayElements(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
}
void ShuffleArrayElements(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		int Index1 = RandomNumber(1, ArrLength) - 1;
		int Index2 = RandomNumber(1, ArrLength) - 1;
		Swap(Arr[Index1], Arr[Index2]);
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int ArrLength;
	int Arr[100];
	FillArrayWithElements(Arr, ArrLength);
	cout << "Original Array Elements:\n";
	PrintArrayElements(Arr, ArrLength);
	ShuffleArrayElements(Arr, ArrLength);
	cout << "\nArray After Shuffle:\n";
	PrintArrayElements(Arr, ArrLength);
	return 0;
}