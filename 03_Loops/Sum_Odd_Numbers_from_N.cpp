#include <iostream>
using namespace std;
int main()
{
	int Num;
	int sum = 0;
	cout << "Please enter a Number \n";
	cin >> Num;
	int counter = 1;
	while (Num >= counter)
	{
		if (Num % 2 == 0)
		{
			Num = Num - 2;
		}
		sum = sum + Num;
		Num=Num-2;
	}
	cout << "The sum is " << sum << endl;
	return 0;
}