#include <iostream>
#include <string>
using namespace std;
int myfunction(int a, int b)
{
	return a + b;
}
int main()
{
    cout<<myfunction(4, 7);
	cout << "\n";
	cout<<myfunction(3, 5);
	cout << endl;
	cout<<myfunction(44, 33);
		return 0;
}