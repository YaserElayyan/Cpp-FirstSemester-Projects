#include <iostream>
using namespace std;
float ReadTotalBill(string Message)
{
	float TotalBill=0;
	while (TotalBill <= 0)
	{
		cout << Message << "\n";
		cin >> TotalBill;
	}

	return TotalBill;
}
float ReadCashPaid(string Message,float TotalBill)
{
	float CashPaid=0;
	while (CashPaid < TotalBill)
	{
		cout << Message << "\n";
		cin >> CashPaid;
	}

	return CashPaid;
}
float CalculateRemainder(float TotalBill, float CashPaid)
{
		return CashPaid - TotalBill;
}
int main()
{

	float ReadBill = ReadTotalBill("Enter The Total Bill");
	float ReadPaid = ReadCashPaid("Enter The Cash That Has Been Paid",ReadBill);
	cout << "Remainde: " << CalculateRemainder(ReadBill, ReadPaid) << "\n";

	return 0;

}