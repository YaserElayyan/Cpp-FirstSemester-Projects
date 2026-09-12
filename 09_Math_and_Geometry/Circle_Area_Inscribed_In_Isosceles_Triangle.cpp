#include <iostream>
#include <cmath>
using namespace std;
//A Stands for Triangle's Equal Side.
//B Stands for Triangle's Base.
void ReadDimensions(float& A, float& B)
{
	cout << "Enter Triangle Side A: " << endl;
	cin >> A;
	cout << "Enter Triangle Base B: " << endl;
	cin >> B;
}
float CircleAreaInscribedInIsoscelesTriangle(float A, float B)
{
	const float PI = 3.141592653589793238;
	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
	return Area;
}
void PrintArea(float Area)
{
	cout << "The Area Of The Circle Inscribed In Isosceles Triangle is " << Area << endl;
}
int main()
{
	float A, B;
	ReadDimensions(A, B);
	PrintArea(CircleAreaInscribedInIsoscelesTriangle(A, B));
	return 0;
}