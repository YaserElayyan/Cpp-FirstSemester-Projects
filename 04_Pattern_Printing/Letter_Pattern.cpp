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

	return char(64 + Number);
}
void PrintInvertedLetterPattern(char Letter)
{
	for (char i = 'A'; i <= Letter; i++)
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
	char Letter = ReadPositiveNumber("Enter a Positive Number\n");
	PrintInvertedLetterPattern(Letter);
	return 0;
}