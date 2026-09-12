#include <iostream>
using namespace std;
int main()
{
	float loanamount;
	float monthlypayment;
	cout << "Enter the Value of your Loan Amount and your Monthly Payment\n";
	cin >> loanamount >> monthlypayment;
	cout << "You need " << loanamount / monthlypayment << " months so you can settle the loan" << endl;
	return 0;
}