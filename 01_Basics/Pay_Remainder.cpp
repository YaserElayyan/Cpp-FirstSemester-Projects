#include <iostream>
using namespace std;
int main()
{
	float p1, p2, p3;
	//p1,p2, p3 are the prices of the goods bought by the customer;

	float moneypaid;
	cout << "Please Enter the Prices of the goods you bought " << endl;
	cin >> p1 >> p2 >> p3;
	float sum = p1 + p2 + p3;

	cout << "The Total Bill is " << sum << endl;
	cout << "Please Enter the Amount of Money you Paid " << endl;
	cin >> moneypaid;
	cout << "The Remainder is " << moneypaid - sum << endl;
	return 0;
}