#include <iostream>
#include <cmath>
using namespace std;
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout <<Message<<"\n";
		cin >> Number;
	} while (Number <= 0);

	return Number;

}
enPrimeNotPrime CheckNumber(int Number)
{
	if (Number <= 1)
	{
		return enPrimeNotPrime::NotPrime;
	}
	int M = round (Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
		{
			return enPrimeNotPrime::NotPrime;
		}
	}
	return enPrimeNotPrime::Prime;
}
void PrintPrimeNumberFrom1ToN(int Number)
{
	cout << "\n";
	cout << "Prime Number From 1 To " << Number << " Are: \n";
	for (int i = 1; i <= Number; i++)
	{
		if (CheckNumber(i) == enPrimeNotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}
int main()
{
	PrintPrimeNumberFrom1ToN(ReadPositiveNumber("Enter A Positive Number:"));
	return 0;
}