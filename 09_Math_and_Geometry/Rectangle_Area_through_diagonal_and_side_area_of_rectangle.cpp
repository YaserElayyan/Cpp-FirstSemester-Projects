#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b;
	cout << "Enter the values of a,b\n";
	cin >> a >> b;
	cout << "The Area is " << a * sqrt(pow(b, 2) - pow(a, 2)) << endl;
	return 0;
}