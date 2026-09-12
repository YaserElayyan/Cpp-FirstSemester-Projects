#include <iostream>
#include <string>
using namespace std;
void swap()
{
	int x=10, y=20;
	int temp;
	temp = x;
	x = y;
	y = temp;
	
	cout << "First Number shold be 10 but it's swapped so it's " << x << " The second number should be 20 but it's swapped so it's " << y;

}
int main()
{
	swap();
	return 0;
}
