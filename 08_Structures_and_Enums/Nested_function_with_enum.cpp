#include <iostream>
using namespace std;
enum endays { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };
void ShowWeekMenu()
{
	cout<< "*************************************************\n";
	cout << "Sunday(1)\n";
	cout << "Monday(2)\n";
	cout << "Tuesday(3)\n";
	cout << "Wednesday(4)\n";
	cout << "Thursday(5)\n";
	cout << "Friday(6)\n";
	cout << "Saturday(7)\n";
	cout << "*************************************************\n";
}
endays ReadDay()
{
	int wd;
	cout << "Enter your day\n";
	cin >> wd;
	//wd means Week Day.
	return endays(wd);
}
string GetWeekDay(endays Mydays)
{
	switch (Mydays)
	{
		case endays::Sunday:
		return "Sunday";
	case endays::Monday:
		return  "Monday";
	case endays::Tuesday:
		return "Tuesday";
		case endays::Wednesday :
		return "Wednesday";
	case endays::Thursday:
		return  "Thursday";
	case endays::Friday:
		return  "Friday";
		case endays::Saturday:
		return "Saturday";
	default:
		return "InValid Number";
	}
}
int main()
{
	ShowWeekMenu();
	cout << GetWeekDay(ReadDay());
	return 0;
}