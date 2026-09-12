#include <iostream>
#include <string>
using namespace std;
struct strPerson
{
	string FullName;
	int Age;
	string City;
	string Country;
	int MonthlySalary;
	int YearlySalary;
	char Gender;
	bool Status;
};
void ReadInfo(strPerson& info)
{
	cout << "Please Enter Your Full Name" << endl;
	getline (cin,info.FullName);
	cout << "\n";
	cout << "Please Enter Your Age" << endl;
	cin >> info.Age;
	cout << "\n";
	cout << "Please Enter your City" << endl;
	cin >> info.City;
	cout << "Please Enter your Country" << endl;
	cin >> info.Country;
	cout << "\n";
	cout << "Please Enter your Monthly Salary" << endl;
	cin >> info.MonthlySalary;
	cout << "\n";
	cout << "Please Enter your Yearly Salary" << endl;
	cin >> info.YearlySalary;
	cout << "\n";
	cout << "Please Enter your Gender" << endl;
	cin >> info.Gender;
	cout << "\n";
	cout << "Please Enter your Status" << endl;
	cin >> info.Status;
	cout << "\n";

}
void Printinfo(strPerson info)
{
	cout << "*******************************************************\n";
	cout << "Your Full Name is " << info.FullName << endl;
	cout << "Your Age is " << info.Age << endl;
	cout << "The City you're living in is " << info.City << endl;
	cout << "The Country you're living in is " << info.Country << endl;
	cout << "Your Monthly Salary is " << info.MonthlySalary << endl;
	cout << "Your Yearly Salary is " << info.YearlySalary << endl;
	cout << "Your Gender is " << info.Gender << endl;
	cout << "Your Status " << info.Status << endl;
	cout << "*******************************************************\n";

}

int main()
{

	strPerson Person1;
	ReadInfo(Person1);
	Printinfo(Person1);
	return 0;
}
