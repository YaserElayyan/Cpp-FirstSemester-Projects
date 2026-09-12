#include <iostream>
#include <string>
using namespace std;
enum enNumberType { Even = 1, Odd = 2 };
int ReadNumber()
{
	int num;
	cout << "Please Enter A Number" << endl;
	cin >> num;
	return num;
}
enNumberType CheckNumberType(int num)
{
	int Result = num % 2;
	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}
void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
	{
		cout << "Number is Even" << endl;
	}
	else
	{
		cout << "Number is Odd" << endl;
	}
}
int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));
}