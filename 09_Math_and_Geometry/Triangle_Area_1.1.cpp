#include <iostream>
#include <cmath>
using namespace std;
// "A" Stands For The Base Of The Triangle.
// "H" Stands For The Height Of The Triangle.
void ReadDimensions(float& A, float& H)
{
	cout << "Enter The Value Of The Base " << endl;
	cin >> A;
	cout << "Enter The Value Of The Height " << endl;
	cin >> H;
}
float CalculateTriangleArea(float A, float H)
{
	return 0.5f * A * H;
}
void PrintArea(float Area)
{
	cout << "The Area Of The Triangle is " << Area << endl;
}
int main()
{
	float A, H;
	ReadDimensions(A, H);
	PrintArea(CalculateTriangleArea(A, H));
	return 0;
}