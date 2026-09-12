#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;

	} while (Number <= 0||Number > 100);

	return Number;
}
string CheckResult(int Grade)
{
	string Result = (Grade >= 50) ? "Pass" : "Fail";

	return Result;
}
int main()
{
	int Grade = ReadPositiveNumber("Enter Student's Grade");
	cout << CheckResult(Grade);
	return 0;
}