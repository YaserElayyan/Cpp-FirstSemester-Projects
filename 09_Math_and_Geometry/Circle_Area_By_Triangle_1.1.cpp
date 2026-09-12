#include <iostream>
#include <cmath>
using namespace std;
void ReadTriangleData(float& A, float& B, float& C)
{
	cout << "Enter The First Side Of The Triangle: " << endl;
	cin >> A;
	cout << "Enter The Second Side Of The Triangle: " << endl;
	cin >> B;
	cout << "Enter The Third Side Of The Triangle: " << endl;
	cin >> C;
}
float CircleAreaByTriangle(float A, float B, float C)
{
	const float PI = 3.14;
	float P = (A + B + C) / 2;
	float T = (A * B * C) /( 4*(sqrt(P * (P - A) * (P - B) * (P - C))));
	float Area = PI * pow(T, 2);
	return Area;
}
void PrintArea(float Area)
{
	cout << "The Circle Area By The Triangle is " << Area << endl;
}
int main()
{
	float A, B, C;
	ReadTriangleData(A, B, C);
	PrintArea(CircleAreaByTriangle(A, B, C));
	return 0;
}