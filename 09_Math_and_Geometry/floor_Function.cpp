#include <iostream>
#include <cmath>
using namespace std;
float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}
int MyFloor(float Number)
{
	int IntPart;
	IntPart = (int)Number;
	if (Number >=0||Number==IntPart)
	{
		return IntPart;
	}
	else
	{
		return --IntPart;
	}
}
int main()
{
	float Number = ReadNumber("Enter A Number To Floor it\n");
	cout << "My Floor Function is : " << MyFloor(Number) << endl;
	cout << "C++ Floor Function is : " << floor(Number) << endl;
	return 0;
}