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
bool CheckNumber(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}
	return Number == Sum;
}
void PrintNumberStatus(int Number)
{
	if (CheckNumber(Number))
	{
		cout << "Perfect Number\n";
	}
	else
	{
		cout << "Not Perfect Number\n ";
	}
}
int main()
{
	PrintNumberStatus(ReadPositiveNumber("Enter A Positive Number: "));
	return 0;
}