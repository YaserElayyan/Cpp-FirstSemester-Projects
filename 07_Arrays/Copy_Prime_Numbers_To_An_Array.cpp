#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
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
void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}
enPrimeNotPrime CheckNumber(int Number)
{
        if (Number <= 1)
        {
        return enPrimeNotPrime::NotPrime;
        }
	if (Number == 2)
	{
		return enPrimeNotPrime::Prime;
	}
	int M = round(sqrt(Number));
	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
		{
			return enPrimeNotPrime::NotPrime;
		}
	}

    return enPrimeNotPrime::Prime;

}
void AddArrayElements(int Arr[100], int &ArrLength, int Number)
{
	ArrLength++;
	Arr[ArrLength - 1] = Number;
}
void CopyPrimeNumbers(int ArrSource[100],int ArrDestination[100] , int ArrLength ,int &Arr2Length)
{
	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckNumber(ArrSource[i]) == enPrimeNotPrime::Prime)
		{
			AddArrayElements(ArrDestination, Arr2Length, ArrSource[i]);
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int ArrSource[100];
	int ArrDestination[100];
	int ArrSourceLength = 0;
	int ArrDestinationLength = 0;
	FillArrayWithElements(ArrSource, ArrSourceLength);
	cout << "Array Elements : \n";
	PrintArray(ArrSource, ArrSourceLength);
	cout << "Array 2 With Prime Elements Only\n";
	CopyPrimeNumbers(ArrSource, ArrDestination, ArrSourceLength, ArrDestinationLength);
	PrintArray(ArrDestination, ArrDestinationLength);
	return 0;
}