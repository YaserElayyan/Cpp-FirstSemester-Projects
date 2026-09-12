#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float Area(float diagonal, float side)
{

	return (side * sqrt((pow(diagonal, 2) - (pow(side, 2)))));
}

int main()
{
	cout << Area(4, 2) << endl;
	cout << Area(13.2, 12.1) << endl;
	return 0;
}
