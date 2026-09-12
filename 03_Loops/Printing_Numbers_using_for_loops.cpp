#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter a Number to print all his previous numbers" << endl;
	cin >> N;
	if (N >= 1)
	{
			for (int i = N; i >= 1; i--)
		{
			cout << i << endl;
		}
	}
	else
	{
		cout << "Enter a Number Greater than 1" << endl;
	}
	return 0;
}
