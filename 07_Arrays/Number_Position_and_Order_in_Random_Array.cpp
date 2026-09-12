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
void FillArrayWithRandoms(int Arr[100], int &Length)
{
	for (int i = 0; i < Length; i++)
	{
		Arr[i] = RandomNumber(0, 100);
	}
}
void PrintArray(int Arr[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}
int NumberPosition(int Arr[100],int Length,int NumberToCheck)
{
	for (int i = 0; i < Length; i++)
	{
		if (Arr[i] == NumberToCheck)
		{
			return i;
		}
		
	}
	return -1;
}
int main()
{
	srand((unsigned)time(NULL));
	int Arr[100];
	int Length;
	Length = ReadPositiveNumber("Enter The Length Of The Array\n");
	int NumberToCheck = ReadPositiveNumber("Enter The Number You Want To Check\n");
	FillArrayWithRandoms(Arr, Length);
	cout << "Array Element : ";
	PrintArray(Arr, Length);
	int Position = NumberPosition(Arr, Length, NumberToCheck);
	cout << "\nThe Number You Are Looking For is: " << NumberToCheck << endl;
	if (Position == -1)
	{
		cout << "\nThe Number isn't Found :-(\n";
	}
	else
	{
		cout << "The Number At Position :" << Position << endl;
		cout << "The Number Its Order :" << Position+1 << endl;

	}
	return 0;
}