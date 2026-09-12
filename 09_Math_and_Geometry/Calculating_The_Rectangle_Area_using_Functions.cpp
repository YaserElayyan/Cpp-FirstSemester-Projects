#include <iostream>
#include <string>
using namespace std;
float Area()
{
	float Length, Width;
	float sum;
	cout << "Please Enter the Length and Width of the Rectangle" << endl;
	cin >> Length >> Width;
	sum = Length * Width;
	return sum;
}
int main()
{

	cout << Area();
	return 0;
}
