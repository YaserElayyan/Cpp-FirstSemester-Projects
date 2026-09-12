#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a Number Please\n";
	cin >> num;
	int i = 1;
	while (num >= i)
	{
		cout << i << endl;
		i++;
	}
	return 0;
}