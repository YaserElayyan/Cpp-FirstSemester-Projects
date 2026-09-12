#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int num;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a number: ";
		cin >> num;
		if (num < 50)
		{
			cout << "Number is less than 50, so it won't be added to the sum." << endl;
			continue;
		}
		sum += num;
	}
	cout << "The sum of numbers greater than or equal to 50 is: " << sum << endl;
	return 0;
}