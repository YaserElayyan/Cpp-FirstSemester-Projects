#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
	float Number = 0.00;

	do
	{

		cout << Message << "\n";
		cin >> Number;

	}while (Number <= 0);

	return Number;
}
float CalculateMonthlyInstallment(float LoanAmount, float Months)
{
	return (LoanAmount / Months);
}
int main()
{

	float LoanAmount = ReadPositiveNumber("Enter Loan Amount: ");
	float Months = ReadPositiveNumber("Enter Months: ");
	cout << "Monthly Installment: " << CalculateMonthlyInstallment(LoanAmount, Months);
	return 0;
}