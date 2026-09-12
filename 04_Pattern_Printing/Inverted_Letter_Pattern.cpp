#include <iostream>
using namespace std;
char ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);

	return char(Number + 64);
}
void PrintLetterPattern(char Letter)
{
	for (char i = Letter; i >= 'A'; i--)
	{
		int RowLength = i - 'A' + 1;
		for (int j = 1; j <= RowLength; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}
int main()
{
	char Letter = ReadPositiveNumber("Enter a Positive Number");
	PrintLetterPattern(Letter);
	return 0;
}