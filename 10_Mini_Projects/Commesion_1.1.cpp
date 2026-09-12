#include <iostream>
using namespace std;
float ReadTotalSales ()
{

	float TotalSales;
	cout << "Enter Total Sales: \n";
	cin >> TotalSales;
	return TotalSales;

}
float GetCommessionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}
float CalculateTotalCommession(float TotalSales)
{
	return GetCommessionPercentage(TotalSales) * TotalSales;
}
int main ()
{
	float N = ReadTotalSales();
	cout << "Commession Percentage: " << GetCommessionPercentage(N) << endl;
	cout << "Total Commession: "<< CalculateTotalCommession(N);
	return 0;
}