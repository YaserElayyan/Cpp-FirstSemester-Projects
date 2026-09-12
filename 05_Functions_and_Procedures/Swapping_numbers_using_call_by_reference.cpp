#include <iostream>
using namespace std;
void Swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "The Value of X after swapping is " << x << " The Value of Y after swapping is " << y << endl;

}
int main()
{

	int x;
	int y;
	cout << "Enter the value of X" << endl;
	cin >> x;
	cout << "Enter the value of Y" << endl;
	cin >> y;
	Swap(x, y);
	return 0;
}
