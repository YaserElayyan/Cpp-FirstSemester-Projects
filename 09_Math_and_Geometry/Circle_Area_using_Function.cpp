#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float Area (float radius)
{
	const float PI = 3.14;
	return (PI * pow(radius, 2));
}
int main()
{
	cout << Area(5) << endl;
	cout << Area(3.112) << endl;
	cout << Area(3.14) << endl;
	return 0;
}