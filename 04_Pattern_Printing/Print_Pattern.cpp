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
void PrintPattern(int Number)
{
	cout << "\n";
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;

		}
		cout << "\n";
	}
}
int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number\n");
	PrintPattern(Number);
	return 0;
}