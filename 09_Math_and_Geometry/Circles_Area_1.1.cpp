#include <iostream>
#include <cmath>
using namespace std;
// R Stands For Circle's Radius
float ReadRadius()
{
	float R;
	cout << "Enter The Value Of Circle's Radius " << endl;
	cin >> R;
	return R;
}
float CalculateCircleArea(float R)
{
	const float PI = 3.141592653589793238;
	return PI * pow(R, 2);
}
void PrintArea(float Area)
{
	cout << "The Circle's Area is " << Area << endl;
}
int main()
{
	PrintArea(CalculateCircleArea(ReadRadius()));
	return 0;
}