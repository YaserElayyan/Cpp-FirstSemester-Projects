#include <iostream>
#include <string>
using namespace std;
struct PersonInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;

};
void ReadPerson1info(PersonInfo& Info)
{
	cout << "Please Enter Your First Name " << endl;
	cin >> Info.FirstName;
	cout << "Please Enter Your Last Name " << endl;
	cin >> Info.LastName;
	cout << "Please Enter Your Age " << endl;
	cin >> Info.Age;
	cout << "Please Enter Your Phone " << endl;
	cin >> Info.Phone;
}
void PrintPerson1info(PersonInfo Info)
{
	cout << "***********************************************************************" << endl;
	cout << "***********************************************************************" << endl;
	cout << "Your First Name is " << Info.FirstName << endl;
	cout << "Your Last Name is " << Info.LastName << endl;
	cout << "Your Age is " << Info.Age << endl;
	cout << "Your Phone Number is " << Info.Phone << endl;
	cout << "***********************************************************************" << endl;
	cout << "***********************************************************************" << endl;

}
void ReadPersonInfo(PersonInfo Person[2])
{
	ReadPerson1info(Person[0]);
	ReadPerson1info(Person[1]);

}
void PrintPersonInfo(PersonInfo Person[2])
{
	PrintPerson1info(Person[0]);
	PrintPerson1info(Person[1]);
}
int main ()
{
	PersonInfo persons[2];
	ReadPersonInfo(persons);
	PrintPersonInfo(persons);
	return 0;
}