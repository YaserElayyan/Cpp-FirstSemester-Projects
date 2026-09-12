#include <iostream>
using namespace std;
int main()
{

	int Num;
	int sum = 0;
	cout << "Enter a Number to know the sum of the even numbers from 1 to num" << endl;
	cin >> Num;
	if (Num % 2 != 1)
	{
		Num--;
	}
	for (int i = Num; i >= 1; i -= 2)
	{
		sum = sum + i;
	}
	cout << "The Sum of the even numbers is " << sum << endl;
	return 0;
}