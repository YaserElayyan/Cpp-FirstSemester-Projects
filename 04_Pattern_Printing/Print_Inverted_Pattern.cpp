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
void PrintInvertedPattern(int Number)
{
	for (int i = Number; i >= 1; i--)
	{
		for (int j = 1; i >= j; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}
int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number\n");
	PrintInvertedPattern(Number);
	return 0;
}