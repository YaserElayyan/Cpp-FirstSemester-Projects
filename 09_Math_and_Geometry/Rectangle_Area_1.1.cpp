#include <iostream>
using namespace std;
void ReadDimensions(float &Length,float &Width)
{
	cout << "Enetr The Length of The Rectangle: " << endl;
	cin >> Length;
	cout << "Enter The Width of The Rectangle: " << endl;
	cin >> Width;
}
float CalculateArea(float Length,float Width)
{
	return Length * Width;
}
void PrintArea(float Area)
{
	cout << "The Area of The Rectangle is: " << Area << endl;
}
int main()
{
	float Length, Width;
	ReadDimensions(Length, Width);
	PrintArea(CalculateArea(Length, Width));
	return 0;
}