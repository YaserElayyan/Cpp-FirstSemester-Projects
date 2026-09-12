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
	return Number - (int)Number;
}
int MyRound(float Number)
{
	int IntPart;
	IntPart = (int)Number;
	float Fraction = GetFraction(Number);
	if (abs(Fraction) >= 0.5)
	{
		if (Number > 0)
		{
			return IntPart++;
		}
		else
		{
			return IntPart--;
		}
	}
	else
	{
		return IntPart;
	}

}
int main()
{
	float Number = ReadNumber("Enter The Number You Want To Round\n");
	cout << "My round Function : " << MyRound(Number) << endl;
	cout << "C++ round Function : " << round(Number) << endl;
	return 0;
}