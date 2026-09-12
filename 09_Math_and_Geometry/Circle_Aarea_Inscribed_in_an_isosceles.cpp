#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const float PI = 3.14;
	float a, b;
	cout << "Enter the length of the base and the length of the top of the frustum: ";
	cin >> a >> b;
	cout << PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b)) << endl;
	return 0;
}