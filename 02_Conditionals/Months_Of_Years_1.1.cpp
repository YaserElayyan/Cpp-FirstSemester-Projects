#include <iostream>
using namespace std;
enum enMonths {Jan = 1,Feb = 2,Mar = 3,Apr = 4,May = 5,
               Jun = 6,Jul = 7,Aug = 8,Sep = 9,Oct = 10,
               Nov = 11,Dec = 12 };
int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;

}
enMonths ReadMonthsOfYear()
{
	return (enMonths)ReadNumberInRange("Enter a Number That Represent The Month ", 1, 12);
}
string GetMonthOfYear(enMonths Month)
{
	switch (Month)
	{

	case enMonths::Jan:
		return "January";
	case enMonths::Feb:
		return "February";
	case enMonths::Mar:
		return "March";
	case enMonths::Apr:
		return "April";
	case enMonths::May:
		return "May";
	case enMonths::Jun:
		return "June";
	case enMonths::Jul:
		return "July";
	case enMonths::Aug:
		return "August";
	case enMonths::Sep:
		return "September";
	case enMonths::Oct:
		return "October";
	case enMonths::Nov:
		return "November";
	case enMonths::Dec:
		return "December";
	default:
		return "Invalid";

	}

}
void PrintMonth(string Month)
{

	cout << "Month is: " << Month << "\n";

}
int main()
{

	PrintMonth(GetMonthOfYear(ReadMonthsOfYear()));

	return 0;

}