#include <iostream>
using namespace std;
int main()
{
	int Base;
	int Power;
	int Result = 1;
	cout << "Enter the Base and Power" << endl;
	cin >> Base >> Power;
	for (int i = 1; i <= Power; i++)
	{
		Result = Base * Result;
	}
	cout << "The Result is " << Result;
	return 0;
}