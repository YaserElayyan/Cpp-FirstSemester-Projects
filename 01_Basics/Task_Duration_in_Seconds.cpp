#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int days, hours, minutes, seconds;
	cout << "Enter the Task Duration in Days, Hours, Minutes and Seconds: " << "(in order)" << endl;
	cin >> days >> hours >> minutes >> seconds;
	cout << "The Task Duration in Seconds is " << round(((days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + (seconds))) << " Seconds" << endl;
	return 0;
}