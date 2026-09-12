#include <iostream>
using namespace std;
int ReadNumber()
{

	int Number;
	cout << "Enter a Number: \n";
	cin >> Number;
	return Number;

}
void Power2_3_4_ofNumber(int Number)
{
	int Power2, Power3, Power4;
	Power2 = Number * Number;
	Power3 = Power2 * Number;
	Power4 = Power3 * Number;
	cout << "Power of 2: " << Power2 << "\n";
	cout << "Power of 3: " << Power3 << "\n";
	cout << "Power of 4: " << Power4 << "\n";

}
int main()
{
	int Number = ReadNumber();
	Power2_3_4_ofNumber(Number);
	return 0;

}