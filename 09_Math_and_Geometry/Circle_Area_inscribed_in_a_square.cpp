#include <iostream>
#include <cmath>
using namespace std;
float ReadSquareSide()
{
	//A Stands for Square Side.
	float A;
	cout << "Enter The Area Of Side" << endl;
	cin >> A;
	return A;
}
float CalculateCircleAreaInscribedInSquare(float A)
{
	const float PI = 3.141592653589793238;
	float Area = (PI * pow(A, 2)) / 4;
	return Area;
}
void PrintArea(float Area)
{
	cout << "The Circle Area Inscribed in a Square " << endl;
}
int main()
{
	PrintArea(CalculateCircleAreaInscribedInSquare(ReadSquareSide()));
	return 0;
}