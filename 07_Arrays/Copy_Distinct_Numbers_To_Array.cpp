#include <iostream>
using namespace std;
void FillArrayWithElements(int Arr[100], int &ArrLength)
{
    ArrLength = 10;
	Arr[0] = 10;
	Arr[1] = 10;
	Arr[2] = 10;
	Arr[3] = 50;
	Arr[4] = 50;
	Arr[5] = 70;
	Arr[6] = 70;
	Arr[7] = 70;
	Arr[8] = 70;
	Arr[9] = 90;

}
void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";
}
void AddArrayElements(int Arr[100], int &ArrLength,int Number)
{
	ArrLength++;
	Arr[ArrLength - 1] = Number;
}
short FindNumberInArray(int Arr[100],int ArrLength , int NumberToCheck)
{
	for (int i = 0; i < ArrLength; i++)
	{
		if (Arr[i] == NumberToCheck)
		{
			return i;
		}
	}
	return -1;
}
bool IsNumberInArray(int Arr[100], int ArrLength,int NumberToCheck)
{
	return (FindNumberInArray(Arr, ArrLength, NumberToCheck ) != -1);
}
void CopyDistinctNumbersToArray(int ArrSource[100], int ArrDestination[100], int SourceLength, int& DestinationLength)
{
	for (int i = 0; i < SourceLength; i++)
	{
		if (!IsNumberInArray(ArrDestination, DestinationLength, ArrSource[i]))
		{
			AddArrayElements(ArrDestination, DestinationLength, ArrSource[i]);
		}
	}
}
int main()
{
	int ArrSource[100];
	int ArrDestination[100];
	int SourceLength = 0;
	int DestinationLength = 0;
	FillArrayWithElements(ArrSource, SourceLength);
	cout << "Array 1 Elements: \n";
	PrintArray(ArrSource, SourceLength);
	CopyDistinctNumbersToArray(ArrSource, ArrDestination, SourceLength, DestinationLength);
	cout << "Array 2 With Distinct Elements: \n";
	PrintArray(ArrDestination, DestinationLength);
	return 0;
}
