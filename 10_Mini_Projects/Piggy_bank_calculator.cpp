#include <iostream>
using namespace std;
int main()
{
	float Penny, Nickel, Dime, Quarter, Dollar;
	cout <<" Enter How many Pennies, Nickels, Dimes, Quarters, Dollars you have(IN ORDER PLEASE!)" << endl;
	cin >> Penny >> Nickel >> Dime >> Quarter >> Dollar;
	cout << "Number of dollars you have is " << (Penny + (Nickel * 5) + (Dime * 10) + (Quarter * 25) + (Dollar * 100)) / 100 << endl;
	cout << "Number of Pennies You have is " << (Penny + (Nickel * 5) + (Dime * 10) + (Quarter * 25) + (Dollar * 100)) << endl;
	return 0;
}  