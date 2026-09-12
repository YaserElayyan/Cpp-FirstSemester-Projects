#include <iostream>
#include <cmath>
using namespace std;
// D Stands For Diameter.
float ReadDiameter()
{
	float D;
	cout << "Enter The Value Of The Diameter: " << endl;
	cin >> D;
	return D;
}
float CalculateCircleArea(float D)
{
	const float PI = 3.141592653589793238;
	float Area = (PI * pow(D, 2)) / 4;
	return Area;
}
void PrintArea(float Area)
{
	cout << "The Area Of The Circle is " << Area << endl;
}
int main()
{
	PrintArea(CalculateCircleArea(ReadDiameter()));
	return 0;
}
