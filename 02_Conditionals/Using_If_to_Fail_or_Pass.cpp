#include <iostream>
using namespace std;
int main()
{
	int Grade;
	cout << "Please Enter your Grade " << endl;
	cin >> Grade;
	if (Grade >= 50) {
		cout << "Pass" << endl;
	}
	else
	{
		cout << "Fail" << endl;
	}
	return 0;
}