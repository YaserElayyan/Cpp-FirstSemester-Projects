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
void AddArrayElement(int Arr[100], int& ArrLength,int Number)
{
	ArrLength++;
	Arr[ArrLength - 1] = Number;
}
void PrintArrayElements(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
}
void CopyElementsToAnotherArray(int ArrSource[100], int ArrDestination[100], int ArrLength, int& Arr2Length)
{
	for (int i = 0; i < ArrLength; i++)
		AddArrayElement(ArrDestination, Arr2Length, ArrSource[i]);
}
int main()
{
	srand((unsigned)time(NULL));
	int Arr[100];
	int ArrLength = 0;
	FillArrayWithElements(Arr, ArrLength);
	int Arr2[100];
	int Arr2Length = 0;
	cout << "Array 1 Elements: ";
	PrintArrayElements(Arr, ArrLength);
	CopyElementsToAnotherArray(Arr, Arr2, ArrLength, Arr2Length);
	cout << "\nArray 2 Elements: ";
	PrintArrayElements(Arr2, Arr2Length);
	return 0;
}