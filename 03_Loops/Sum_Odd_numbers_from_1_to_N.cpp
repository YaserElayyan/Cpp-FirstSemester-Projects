#include <iostream>
using namespace std;
int main()
{
	int Num;
	int sum = 0;
	cout << "Please Enter a Number to print the odd numbers from 1 to Num" << endl;
	cin >> Num;
	if (Num % 2 == 0)
	{
		{
			Num = Num - 1;
		}
	}
		for (int i = Num; i >= 1; i -= 2)
		{
			sum = sum + i;
		}
		cout << "The sum is " << sum << endl;
	return 0;
}