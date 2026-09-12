#include <iostream>
#include <string>
using namespace std;
int sum()
{
	int num1;
	int num2;
	cout << "Enter Two Numbers " << endl;
	cin >> num1 >> num2;
int sum = num1 + num2;
return sum;
}

int main()
{
	cout  << sum();
	return 0;
}