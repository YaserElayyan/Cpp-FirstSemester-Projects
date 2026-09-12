#include <iostream>
using namespace std;
int main()
{
	int Num;
	int sum = 0;
	cout << "Enter a Number but NOT -99 \n";
	cin >> Num;
	while (Num != -99)
	{
		cout << "Enter another Number\n";
		sum = sum + Num;
		cin >> Num;
	}
	cout << "You Entered -99 so the sum is " << sum;
	return 0;
}
