#include <iostream>
using namespace std;
int main()
{
	int Num1;
	int Num2;
	int max;
	cout << "Enter a 2 Numbers " << endl;
	cin >> Num1 >> Num2;
	max = (Num1 >= Num2) ? Num1 : Num2;
	cout << "The Max Number is " << max << endl;
		return 0;
}
