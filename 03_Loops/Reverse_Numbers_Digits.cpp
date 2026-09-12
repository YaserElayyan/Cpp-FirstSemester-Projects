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
void PrintReservedDigits(int Number)
{
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number =Number / 10;
		cout << Remainder;
	}
}
int main()
{

	PrintReservedDigits(ReadPositiveNumber("Enter A Number"));
	return 0;

}