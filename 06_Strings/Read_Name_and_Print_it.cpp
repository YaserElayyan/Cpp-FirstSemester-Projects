#include <iostream>
#include <string>
using namespace std;
string ReadName()
{
	string Name;
	cout << "Please Enter Your Name" << endl;
	getline(cin, Name);
	return Name;
}
 void PrintName(const string &Name)
{
	cout << "Your Name is " << Name << endl;
}
int main()
{
	PrintName(ReadName());
	return 0;
}