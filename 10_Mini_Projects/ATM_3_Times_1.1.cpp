#include <iostream>
using namespace std;
string ReadPINCode()
{
	string PIN;
	cout << "Enter Your PIN Code: \n";
	cin >> PIN;

	return PIN;

}
bool Login()
{
	string PIN;
	int Counter = 3;
	do
	{
		Counter--;
		PIN = ReadPINCode();
		if (PIN == "1234")
		{
			return true;
		}
		else
		{
			cout << "Wrong PIN Code You Have " << Counter << " Remaining Attempts\n";
		}

	} while (PIN != "1234" && Counter >=1 );

	return false;

}
int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "Your Balance: " << 7500 << "\n";
	}
	else
	{
		system("color 4F");
		cout << "Sorry You're Blocked,Contact The Bank\n";
	}

	return 0;
}