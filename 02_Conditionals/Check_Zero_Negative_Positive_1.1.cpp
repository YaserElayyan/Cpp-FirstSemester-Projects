#include <iostream>
using namespace std;
int ReadNumber(string Message)
{
	int Number;
	cout << Message << "\n";
	cin >> Number;

	return Number;
}
string CheckResult(int Number)
{
	string Result = (Number == 0) ? "Zero" : ((Number > 0) ? "Positive" : "Negative");

	return Result;
}
int main()
{
	int Result = ReadNumber("Enter a Number");
	cout << CheckResult(Result);
	return 0;
}