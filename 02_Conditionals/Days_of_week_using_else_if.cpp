#include <iostream>
using namespace std;
int main()
{
	int day;
	cout << "Enter the Number that Represent the Day " << endl;
	cin >> day;
	if (day == 1)
	{
		cout << "Today is Sunday" << endl;
	}
	else if (day == 2)
	{
		cout << "Today is Monday" << endl;
	}
	else if (day == 3)
	{
		cout << "Today is Tuesday" << endl;
	}
	else if (day == 4)
	{
		cout << "Today is Wednesday" << endl;
	}
	else if (day == 5)
	{
		cout << "Today is Thursday" << endl;
	}
	else if (day == 6)
	{
		cout << "Today is Friday" << endl;
	}
	else if (day == 7)
	{
		cout << "Today is Saturday" << endl;
	}
	else
	{
		cout << "Invalid Day" << endl;
	}
	return 0;
}
