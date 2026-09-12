#include <iostream>
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
int DigitToCheck(short Digit, int Number)
{
	int FreqCount = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (Digit == Remainder)
		{
			FreqCount++;
		}
	}
	return FreqCount;
}
void PrintFreq(int Number)
{
	int FreqCount = 0;
	for (int i = 0; i < 10; i++)
	{
		FreqCount=DigitToCheck(i, Number);
		if (FreqCount > 0)
		{
			cout << "The Frequency Of " << i << " is " << FreqCount << "\n";

		}
	}
}
int main()
{
	PrintFreq(ReadPositiveNumber("Enter a Number"));
	return 0;
}