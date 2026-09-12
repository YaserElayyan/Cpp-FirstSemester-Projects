#include <iostream>
#include <string>
using namespace std;
double ReadNumber()
{
	int Num;
	cout << "Enter a Number: " << endl;
	cin >> Num;
	return Num;
}
double CalculateHalfNumber(int Num)
{
	return (float)Num / 2.0;
}
void PrintNumbers(int Num)
{
	string Result = "The Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
	cout << Result << endl;
}
int main()
{
	PrintNumbers(ReadNumber());
	return 0;
}