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
int ReverseNumber (int Number)
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
bool IsPalidrome(int Number1, int Number2)
{
	if (Number1 == Number2)
		return true;
	else
		return false;
}
void PrintNumberStatus(int Number1, int Number2)
{
	if (IsPalidrome(Number1, Number2))
		cout << Number1 << " is a Palindrome Number \n";
	else 
		cout << Number1 << " isn't a Palindrome Number \n";
}
int main ()
{
	int Number1 = ReadPositiveNumber("Enter a Positive Number\n");
	int Number2 = ReverseNumber(Number1);
	PrintNumberStatus(Number1, Number2);
	return 0;
}