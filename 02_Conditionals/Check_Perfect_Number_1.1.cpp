#include <iostream>
#include <cmath>
using namespace std;
enum enPerfectNotPerfect { Perfect = 1, NotPerfect = 2 };
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
int GetandSumFactor(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}
	return Sum;
}
enPerfectNotPerfect CheckNumber(int Number,int Sum)
{
	if (Sum == Number)
		return enPerfectNotPerfect::Perfect;
	else
		return enPerfectNotPerfect::NotPerfect;
}
void PrintNumberStatus(int Number,int Sum)
{
	if (CheckNumber(Number, Sum) == enPerfectNotPerfect::Perfect)
		cout << Number << " is " << "Perfect Number\n";
	else
		cout << Number << " isn't " << "Perfect Number\n";
}
int main()
{
	int Number = ReadPositiveNumber("Enter a Positive Number");
	int Sum = GetandSumFactor(Number);
	PrintNumberStatus(Number, Sum);
	return 0;
}