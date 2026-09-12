#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cout << "Please enter the value of the first number" << endl;
	cin >> A;
	cout << "Please enter the value of the second number" << endl;
	cin >> B;
	cout << A << "=" << B << " is " << (A == B) << endl;
	cout << A << "!=" << B << " is " << (A != B) << endl;
	cout << A << ">" << B << " is " << (A > B) << endl;
	cout << A << "<" << B << " is " << (A < B) << endl;
	cout << A << ">=" << B << " is " << (A >= B) << endl;
	cout << A << "<=" << B << " is " << (A <= B) << endl;
	return 0;
}
