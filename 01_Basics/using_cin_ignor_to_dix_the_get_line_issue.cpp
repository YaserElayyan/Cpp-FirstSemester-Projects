#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num;
	string name;
	string country;
	cout << "Enter a Number" << endl;
	cin >> num;
	cout << "Number: " << num;
	cout << "\n";
	cout << "Enter your Full Name " << endl;
	cin.ignore(1, 'endl');
	getline(cin, name);
	cout << "Name :" << name;
	cout << "\n";
	cout << "Enter Your Country" << endl;
	cin >> country;
	cout << "Country: " << country;
	return 0;
}