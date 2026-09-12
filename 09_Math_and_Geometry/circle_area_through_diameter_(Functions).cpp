#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void Area()
{
	float Diameter;
	const float PI = 3.14;
	cout << "Enter The Diameter of the Circle" << endl;
	cin >> Diameter;
	if (Diameter > 0)
	{
		cout << (PI * pow(Diameter, 2)) / 4;
	}
	else
	{
		cout << "Please Enter a Positive Number" << endl;
	}

}
int main()
{
	Area();
	return 0;
}