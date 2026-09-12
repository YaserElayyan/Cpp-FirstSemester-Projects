#include <iostream>
using namespace std;
int main()
{
	int N;
	long long factorial = 1;
	cout << "Enter a Number to know its Factorial" << endl;
	cin >> N;
	if (N < 0)
	{
		cout << "Please Enter a Positive Number" << endl;
		return 0;
	}
	for (int i = N; i >= 1; i--)
	{
		factorial = factorial * i;
	}
	cout << "The Factorial is " << factorial << endl;
	return 0;
}
