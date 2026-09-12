#include <iostream>
#include <string>
using namespace std;
struct stContactinfo
{
	string Phone;
	string Email;
	string FacebookAccount;
};
struct stAddress 
{
	string Street;
	string City;
	string Country;
	stContactinfo information;
};
struct Citezen
{
	string FullName;
	short Age;
	char Gender;
	string Status;
	stAddress CitezenAddress;
	stContactinfo CitezenContactinfo;
};
int main()
{
	cout << "*****************************************************************" << endl;
	Citezen c1;
	c1.FullName = "Yaser Elayyan";
	c1.Age = 19;
	c1.Gender = 'M';
	c1.Status = "Single";
	c1.CitezenAddress.Street = "Main Street";
	c1.CitezenAddress.City = "Springfield";
	c1.CitezenAddress.Country = "Freedonia";
	c1.CitezenContactinfo.Email = "yaser.dev@example.com";
	c1.CitezenContactinfo.Phone = "+1-555-0142";
	c1.CitezenContactinfo.FacebookAccount = "yaser.codes";
	cout << "Full Name" << " : " << c1.FullName << endl;
	cout << "Age" << ":" << c1.Age << endl;
	cout << "Gender" << ":" << c1.Gender << endl;
	cout << "Status" << ":" << c1.Status << endl;
	cout << "Street" << ":" << c1.CitezenAddress.Street << endl;
	cout << "City" << ":" << c1.CitezenAddress.City << endl;
	cout << "Country" << ":" << c1.CitezenAddress.Country << endl;
	cout << "Email" << ":" << c1.CitezenContactinfo.Email << endl;
	cout << "Phone" << ":" << c1.CitezenContactinfo.Phone << endl;
	cout << "Facebook Account" << ":" << c1.CitezenContactinfo.FacebookAccount << endl;
	cout << "*****************************************************************" << endl;
	return 0;
}
       