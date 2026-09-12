#include <iostream>
using namespace std;
string ReadPassword(string Message)
{
	string Password = "";
	cout << Message << "\n";
	cin >> Password;
	return Password;

}
bool GuessPassword(string Password)
{
	string word = "";
	int Counter = 0;
	for (int i = 65; i <=90 ; i++)
	{
		for (int j = 65; j <= 90 ;  j++)
		{
			for (int k = 65 ; k <= 90 ; k++)
			{
				word = word +char(i);
				word = word + char(j);
				word = word + char(k);
				Counter++;
				cout << "Trial [" << Counter << "]" << ": " << word << endl;
				if (word == Password)
				{
					cout << "Password is " << word << "\n";
					cout << "Found After " << Counter << " Trial(s) \n";
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}
int main()
{
	string Password = ReadPassword("Enter Your Password\n");
	GuessPassword(Password);
	return 0;
}