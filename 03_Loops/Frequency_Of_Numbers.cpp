#include <iostream>
#include <cmath>
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
int CountDigitFrequency(short DigitToCheck, int Number)
{
	int FreqCount = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (Remainder == DigitToCheck)
		{
			FreqCount++;

		}
	}
	return FreqCount;
}
int main()
{

	int Number = ReadPositiveNumber("Enter The Main Number");
	short DigitToCheck = ReadPositiveNumber("Enter The Number To Check");
	cout << "The Frequency Of " << DigitToCheck << " in " << Number << " is " << CountDigitFrequency(DigitToCheck, Number);
	return 0;

}