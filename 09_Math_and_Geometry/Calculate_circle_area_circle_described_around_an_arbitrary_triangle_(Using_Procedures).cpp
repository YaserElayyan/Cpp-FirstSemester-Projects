#include <iostream>
#include <cmath>
using namespace std;
void CCAT(float a, float b, float c)
{
	//CCAT stands for circle area circle described around an arbitrary triangle
	const float PI = 3.14;
	float p = (a + b + c) / 2;
	float A = p * (p - a) * (p - b) * (p - c);
	float R = sqrt(A);
	float C = a * b * c;
	float D = C / (4 * R);
	float Area = PI * pow(D, 2);
	cout << Area;



}
int main()
{
	CCAT(4, 5, 6);
	CCAT(2.3, 4.2, 2);
	return 0;
}