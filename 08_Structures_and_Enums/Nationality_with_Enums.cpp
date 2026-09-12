#include <iostream>
using namespace std;
int main()
{
	enum enCountryName { Jordan = 1, Tunisia = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, Others = 7 };
	cout << "*************************************\n";
	cout << "Enter the Number that represents your Country\n";
	cout << "(1)Jordan" << endl;
	cout << "(2)Tunisia" << endl;
	cout << "(3)Algeria" << endl;
	cout << "(4)Oman" << endl;
	cout << "(5)Egypt" << endl;
	cout << "(6)Iraq" << endl;
	cout << "(7)Others" << endl;
	cout << "*************************************\n";
	cout << "Your Choice?\n";
	int c;
	cin >> c;
	enCountryName Country;
	Country = enCountryName(c);
	if (enCountryName::Jordan)
	{
		cout << "Your Country is Jordan" << endl;
	}
	else if (enCountryName::Tunisia)
	{
		cout << "Your Country is Tunisia" << endl;
	}
	else if (enCountryName::Algeria)
	{
		cout << "Your Country is Algeria" << endl;

	}
	else if (enCountryName::Oman)
	{
		cout << "Your Country is Oman" << endl;
	}
	else if (enCountryName::Egypt)
	{
		cout << "Your Country is Egypt" << endl;
	}
	else if (enCountryName::Iraq)
	{
		cout << "Your Country is Iraq" << endl;
	}
	else if (c == 7)
	{
		cout << "Others" << endl;
	}
	return 0;
}