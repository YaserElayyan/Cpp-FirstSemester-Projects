#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
int ReadPositiveNumber(string Message)
{

	int Number=0;
	while (Number <= 0)
	{
		cout << Message << "\n";
		cin >> Number;
	}
	return Number;

}

enPrimeNotPrime CheckNumber(int Number)
{
	if (Number < 2)
	{
		return enPrimeNotPrime::NotPrime;
	}
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;
	
	}
	return enPrimeNotPrime::Prime;

	
}
void PrintNumberType(int Number)
{
	if (CheckNumber(Number) == enPrimeNotPrime::NotPrime)
		cout << "Not Prime Number \n";
	else
		cout << "Prime Number \n";
}
int main()
{
	PrintNumberType((ReadPositiveNumber("Enter Positive Number")));
	return 0;
}