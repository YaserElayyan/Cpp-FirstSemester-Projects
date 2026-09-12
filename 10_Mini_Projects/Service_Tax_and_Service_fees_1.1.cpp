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
float CalculateSalesTax(float TotalBill)
{

	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;

	return TotalBill;

}
int main()
{

	float TotalBill = ReadPositiveNumber("Enter Bill Value:");
	cout << "\n";
	cout << "Total Bill: " << TotalBill << "\n";
	cout << "Total Bill After Service Fee and Sales Tax: " << CalculateSalesTax(TotalBill) << "\n";

	return 0;

}