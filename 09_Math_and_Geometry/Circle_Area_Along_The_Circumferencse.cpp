#include <iostream>
#include <cmath>
using namespace std;
float ReadCircumference()
{
	//l Stands for Circumference.
	float l;
	cout << "Enter The Value Of The Circumference " << endl;
	cin >> l;
	return l;
}
float CircleAreaAlongTheCircumference(float l)
{
	const float PI = 3.141592653589793238;
	float Area = (pow(l, 2)) / (4 * PI);
	return Area;
}
void PrintArea(float Area)
{
	cout << "The Area Of The Circle Along The Circumference is " << Area << endl;
}
int main()
{
	PrintArea(CircleAreaAlongTheCircumference(ReadCircumference()));
	return 0;
}