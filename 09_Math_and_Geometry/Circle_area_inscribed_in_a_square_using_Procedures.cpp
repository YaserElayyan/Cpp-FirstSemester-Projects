#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float CAS(float A)
{//CAS stands for circle area inscribed in a square
	const float PI = 3.14;
	return (PI * pow(A, 2)) / 4;

}
int main()
{
	cout << CAS(4) << endl;
	cout << CAS(7) << endl;
	cout << CAS(2.44) << endl;
	return 0;

}