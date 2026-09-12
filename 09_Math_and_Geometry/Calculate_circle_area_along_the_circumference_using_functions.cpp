#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float Area(float l)
{
	const float PI = 3.14;
	return (pow(l, 2) / (4 * PI));
}
int main()
{
	cout << Area(7) << endl;
	cout << Area(3.13) << endl;
	cout << Area(12) << endl;
	return 0;
}