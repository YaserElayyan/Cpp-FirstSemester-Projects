#include <iostream>
#include <string>
using namespace std;
void myfunction()
{
	string name;
	cout << "Please Enter Your Name: " << endl;
	getline(cin, name);
	cout << endl;
	cout << name;
}
	int main()
	{
		myfunction();
		return 0;
	}
