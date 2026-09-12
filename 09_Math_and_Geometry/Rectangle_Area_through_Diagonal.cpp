#include <iostream>
#include <cmath>
using namespace std;
// D Stands for Diagonal and S stands for a Rectangle's Side.
void ReadInputs(float &D , float &S)
{
	cout << "Enter The Value of Rectangle's Diagonal  " << endl;
	cin >> D;
	cout << "Enter The Value of Rectangle's Side   " << endl;
	cin >> S;
}
float CalculateArea(float D, float S)
{
	return (S * sqrt((pow(D,2) - (pow(S ,2)))));
}
void PrintArea(float Area)
{
	cout << "The Area of The Rectangle Through Diagonal is : " << Area;
}
int main()
{
	float D, S;
	ReadInputs(D, S);
	PrintArea(CalculateArea(D, S));
	return 0;
}
