#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int& Number1, int& Number2)
{
	cout << "Please Enter First Number " << endl;
	cin >> Number1;
	cout << "Please Enter Second Number " << endl;
	cin >> Number2;
}
int CompareNumbers(int Number1, int Number2)
{
	if (Number1 >= Number2)
		return Number1;
	else
		return Number2;
}
void PrintNumbers(int Max)
{
	cout << "Max is " << Max << endl;
}
int main()
{
	int Number1, Number2;
	ReadNumbers(Number1, Number2);
	PrintNumbers(CompareNumbers(Number1, Number2));
	return 0;
}