#include <iostream>
using namespace std;
int ReadIntNumberRangeUsingDoWhile(int from, int to)
{
	int Number;

	do
	{
		cout << "Please Enter a Number " << "between " << from << " and " << to << endl;
		cin >> Number;
	} while (Number<from || Number>to);
	return Number;
}
int main()
{
	int MyNumber;
	MyNumber = ReadIntNumberRangeUsingDoWhile(10, 100);
		cout<<"The Number you Entered is " << MyNumber;
	return 0;
}