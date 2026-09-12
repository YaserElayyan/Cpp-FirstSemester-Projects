#include <iostream>
#include <string>
using namespace std;
struct PersonInfo
{
	string FirstName;
	string LastName;
	short Age;
	string Phone;
};
void ReadInfo(PersonInfo& info)
{
	cout << "Enter your First Name: " << endl;
	cin >> info.FirstName;
	cout << "Enter Your Last Name: " << endl;
	cin >> info.LastName;
	cout << "Enter Your Age: " << endl;
	cin >> info.Age;
	cout << "Enter Your Phone Number: " << endl;
	cin >> info.Phone;
}
void PrintInfo(PersonInfo info)
{
	cout << "\n*********************************************\n" << endl;
	cout << "Your First Name: " << info.FirstName << endl;
	cout << "Your Last Name: " << info.LastName << endl;
	cout << "Your Age: " << info.Age << endl;
	cout << "Your Phone Number: " << info.Phone << endl;
	cout << "\n*********************************************\n" << endl;
}
void ReadPersonInfo(PersonInfo Arr[100], int& Length)
{
	cout << "How Many Persons You Want to Enter Their Info" << endl;
	cin >> Length;
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Enter the Info about Person" << "(" << i + 1 << "): " << endl;
		ReadInfo(Arr[i]);
	}
}
void PrintPersonInfo(PersonInfo Arr[100], int Length)
{
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "The Info of Person(" << i + 1 << ")" << " :" << endl;
		PrintInfo(Arr[i]);
	}
}
int main()
{
	PersonInfo Arr[100];
	int Length = 0;
	ReadPersonInfo(Arr, Length);
	PrintPersonInfo(Arr, Length);
	return 0;
}