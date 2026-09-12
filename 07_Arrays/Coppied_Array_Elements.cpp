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
void CopyArray(int ArrSource[100], int ArrDestination[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		ArrDestination[i] = ArrSource[i];
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int Arr[100];
	int Length;
	ReadArray(Arr,Length);
	cout << "\nArray Elements: \n";
	PrintArray(Arr, Length);
	int Array2[100];
	CopyArray(Arr, Array2, Length);
	cout << "Copied Array Elements\n";
	PrintArray(Array2,Length);	
	return 0;
}