#include <iostream>
using namespace std;
struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;

};
void ReadInfo(strInfo &info)
{
	cout << "Please Enter Your First Name: " << endl;
	cin >> info.FirstName;
	cout << "Please Enter Your Last Name: " << endl;
	cin >> info.LastName;
	cout << "Please Enter Your Age: " << endl;
	cin >> info.Age;
	cout << "Please Enter Your Phone Number " << endl;
	cin >> info.Phone;

}
void PrintInfo(strInfo info)
{
	cout << "\n****************************************************\n\n";

	cout << "Your first Name is " << info.FirstName << endl;
	cout << "Your Second Name is " << info.LastName << endl;
	cout << "Your Age is " << info.Age << endl;
	cout << "Your Phone Number is " << info.Phone << endl;

	cout << "\n****************************************************\n";
}
int main()
{
	strInfo Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);
	strInfo Person2Info;
	ReadInfo(Person2Info);
	PrintInfo(Person2Info);
	return 0;
}