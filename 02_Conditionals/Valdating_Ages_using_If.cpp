#include <iostream>
using namespace std;
int main()
{
	int Age;
	cout << "Please Enter your Age " << endl;
	cin >> Age;
	if (Age >= 18 && Age <= 45)
	{
		cout << "Valid Age" << endl;

	}
	else 
	{
		cout << "Invalid Age" << endl;
	}
	return 0;
}