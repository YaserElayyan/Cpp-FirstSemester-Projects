#include <iostream>
using namespace std;
int main()
{
	int Num;
	int sum = 0;
	cout << "Please Enter a Number \n";
	cin >> Num;
	if (Num % 2 != 0)
	{
		Num = Num - 1;
	}
	while (Num > 0)
	{
		sum = sum + Num;
		Num -= 2;
	}
	cout << "The Sum is " << sum << endl;
	return 0;
}