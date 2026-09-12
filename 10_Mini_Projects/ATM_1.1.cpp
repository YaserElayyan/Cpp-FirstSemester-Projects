#include <iostream>
#include <string>
using namespace std;
string ReadPINCode()
{
	string PINCode;
	cout << "Enter PIN Code: \n";
	cin >> PINCode;
	
	return PINCode;
}
bool LogIn()
{
	string PINCode;
	do
	{
		PINCode = ReadPINCode();
		if (PINCode == "1234")
		{
			return true;
		}
		else
		{
			cout << "Wrong Password\n";
			system("color 4F");
		}

	} while (PINCode != "1234");
	return false;

}
int main()
{
	if (LogIn())
	{
		system("color 2F");
		cout << "\n Your Account Balance: " << 7300 << endl;
	}

	return 0;
}