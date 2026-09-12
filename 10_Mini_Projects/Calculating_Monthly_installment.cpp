#include <iostream>
using namespace std;
int main()
{
	float loanamount;
	float months;
	cout << "Can you enter the loan amount and how many months you need to settle the loan\n";
	cin >> loanamount >> months;
	cout << "You need to pay " << loanamount / months << " Dinars monthly so you can settle the loan" << endl;
	return 0;
}