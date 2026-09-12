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
void ReadArray(int Arr[100], int &Length)
{
	Length = ReadPositiveNumber("Enter The Size Of The Array\n");
	for (int i = 0; i < Length; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int Arr[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << "Arr[" << i << "]: " << Arr[i] << endl;
	}
}
int MaxNumber(int Arr[100], int Length)
{
	int Max = Arr[0];
	for (int i = 0; i < Length; i++)
	{
		if (Arr[i] > Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}
int main()
{
	srand((unsigned)time(NULL));
	int Arr[100];
	int Length;
	ReadArray(Arr,Length);
	cout << "\nArray Element:\n";
	PrintArray(Arr, Length);
	cout << "Max Number is: " << MaxNumber(Arr, Length) << endl;
	return 0;
}