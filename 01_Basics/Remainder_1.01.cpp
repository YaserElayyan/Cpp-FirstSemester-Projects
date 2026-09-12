#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
	float Number = 0;
	while (Number <= 0)
	{
		cout << Message << "\n";
		cin >> Number;
	}

	return Number;
}
float CalculateRemainder(float TotalBill, float CashPaid)
{
	return CashPaid - TotalBill;
}
int main()
{

	float TotalBill = ReadPositiveNumber("Enter Total Bill:");
	float CashPaid = ReadPositiveNumber("Enter Total Cash Paid");
	cout << "********************************************************\n";
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << CashPaid << endl;
	cout << "********************************************************\n";
	cout << "Remainder =  " << CalculateRemainder(TotalBill, CashPaid) << endl;

	return 0;
}