#include <iostream>
#include <string>
using namespace std;

int main()
{
	string PIN;
	int counter = 1;
	cout << "Enter a PIN code \n";
	cin >> PIN;

	if (PIN.length() != 4)
	{
		cout << "The Code Should be exactly 4 Digits\n";
		return 0;
	}

	while (counter <= 3)
	{
		if (PIN == "1234")
		{
			cout << "The code is Correct\n";
			return 0;
		}
		else
		{
			cout << "The Code is Incorrect\n";
			if (counter < 3)  
			{
				cout << "Try Again \n";
				cin >> PIN;
			}
			counter++;
		}
	}

	cout << "You can't Enter another Code\n";

	return 0;
}