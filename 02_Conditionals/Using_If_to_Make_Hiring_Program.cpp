#include <iostream>
using namespace std;
int main()
{
	short Age;
	bool DriverLicense;
	cout << "Enter your Age Please " << endl;
	cin >> Age;
	cout << "Do you Have a Driver License (Please Answer with 1 if you have and with 0 if you don't)" << endl;
	cin >> DriverLicense;
	if (Age >= 18 && DriverLicense == 1)
	{
		cout << "Congrats!!! You're Hired" << endl;
	}
	else
	{
		cout << "We're Sorry but you are not Qualified for this Job " << endl;
	}
	return 0;

}