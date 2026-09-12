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
void ReadArrayElements(int Arr[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		Arr[i] = i + 1;
	}
}
void PrintArray(int Arr[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}
void Swap(int& Num1, int& Num2)
{
	int Temp;
	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}
void ShuffleArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		Swap(Arr[RandomNumber(1, ArrLength) - 1], Arr[RandomNumber(1, ArrLength)-1]);
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int Arr[100];
	int Length = ReadPositiveNumber("Enter The Length Of The Array\n");
	ReadArrayElements(Arr, Length);
	cout << "Original Array: ";
	PrintArray(Arr, Length);
	cout << "\n";
	ShuffleArray(Arr,Length);
	cout << "Shuffled Array: ";
	PrintArray(Arr, Length);
	return 0;

}