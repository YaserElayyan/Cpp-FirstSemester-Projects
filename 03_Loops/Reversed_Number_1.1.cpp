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
int ReversedDigits(int Number)
{
	int Remainder = 0;
	int Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}
int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number");
	cout << "Reversed Number is : ";
	cout << ReversedDigits(Number);
	return 0;
}