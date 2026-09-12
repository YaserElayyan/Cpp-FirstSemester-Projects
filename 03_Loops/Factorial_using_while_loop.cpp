#include <iostream>
using namespace std;
int main()
{
	int num;
	int Factorial = 1;
	cout << "Enter a Number to know its Factorial" << endl;
	cin >> num;
	int a = num;
	while (num > 0)
	{
		Factorial = num * Factorial;
		num--;
	}
	cout << "The Factorial of " << a << " is " << Factorial << endl;
	return 0;
}