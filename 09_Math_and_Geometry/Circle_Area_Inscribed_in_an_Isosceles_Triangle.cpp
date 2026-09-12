#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.14;
	float A, B;
	cout << "Enter the values of A and B"<< endl;
		cin >> A >> B;
	cout << "The circle inscribed in an isosceles Triangle " << PI * ((B * B) / 4) * ((2 * A) - B) / (2 * A + B) << endl;
	return 0;
}
