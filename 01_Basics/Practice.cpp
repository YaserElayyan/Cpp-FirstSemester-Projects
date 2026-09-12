#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int numberseconds;
	cout << "Enter the Number of Seconds " << endl;
	cin >> numberseconds;
	cout << "Number of Days is " <<round(numberseconds / (24 * 60 * 60)) << endl;
	int remainingseconds = numberseconds % (24 * 60 * 60);
	cout << "Number of hours is " <<round(remainingseconds / (60 * 60)) << endl;
	int remainingseconds2 = remainingseconds % (60 * 60) ;
	cout << "Number of minutes is " << round(remainingseconds2 / 60 )<< endl;
	cout << "Number of seconds is " <<round( remainingseconds2 % 60) << endl;
	return 0;
}