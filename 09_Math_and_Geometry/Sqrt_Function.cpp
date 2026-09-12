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
float GetFraction(float Number)
{
	float FractionPart = Number - (int)Number;
	return FractionPart;
}
int MyCeil(float Number)
{
	int IntPart = (int) Number;
	float FractionPart = GetFraction(Number);
	if (FractionPart!= 0)
	{
		if (Number > 0)
		{
			return ++IntPart;
		}
		else
		{
			return IntPart;
		}
	}
	else
		return IntPart;
}
int main()
{
	float Number = ReadNumber("Enter a Number You Want To Ceil\n");
	cout << "My Ceil Function is : " << MyCeil(Number) << endl;
	cout << "C++ Ceil Function is : " << ceil(Number) << endl;
	return 0;
}