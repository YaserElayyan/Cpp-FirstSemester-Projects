#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);

	return Number;
}
float CalculateMonths(float LoanAmount , float MonthlyPayment)
{
	return (LoanAmount / MonthlyPayment);
}
int main()
{
	float LoanAmount = ReadPositiveNumber("Enter Loan Amount: ");
	float MonthlyPayment = ReadPositiveNumber("Enter Monthly Payment");
	cout << "Months: " << CalculateMonths(LoanAmount, MonthlyPayment) << "\n";

	return 0;
}