#include <iostream>
#include <string>
using namespace std;
struct strContactInfo
{
	string Phone;
	string Email;
	string FacebookAccount;
};
struct strAddress
{
	string Street;
	string City;
	string Country;
	strContactInfo Contact;


};
struct strCitizen
{
	string FullName;
	short Age;
	char Gender;
	string Status;
	strAddress Address;
};

int main()
{
	strCitizen C1, C2;
	cout << "Enter Your Full Name,Age,Gender,Matirial Status:\n";
	getline(cin, C1.FullName);
	cin >> C1.Age >> C1.Gender >> C1.Status;
	cout << "Enter your Address (Country,City,City):\n";
	cin >> C1.Address.Country >> C1.Address.City >> C1.Address.Street;
	cout << "Enter your Contact info(Email,Phone,Facebook Account) : ";
	cin >> C1.Address.Contact.Email;
	cin >> C1.Address.Contact.Phone;
	cin >> C1.Address.Contact.FacebookAccount;
	cout << "First Person Info:\n ";
	cout << "********************************************************************\n";
	cout << "Full Name: " << C1.FullName << endl;
	cout << "Age: " << C1.Age << endl;
	cout << "Gender: " << C1.Gender << endl;
	cout << "Status: " << C1.Status << endl;
	cout << "Address Info:" << endl;
	cout << "Country: " << C1.Address.Country << endl;
	cout << "City: " << C1.Address.City << endl;
	cout << "Street: " << C1.Address.Street << endl;
	cout << "Contact Info: \n";
	cout << "Phone: " << C1.Address.Contact.Phone << endl;
	cout << "Email: " << C1.Address.Contact.Email << endl;
	cout << "Facebook Account: " << C1.Address.Contact.FacebookAccount << endl;
	cout << "********************************************************************\n";
	cout << "Enter Your Full Name,Age,Gender,Matirial Status:\n";
	cin.ignore();
	getline(cin, C2.FullName);
	cin >> C2.Age >> C2.Gender >> C2.Status;
	cout << "Enter your Address (Country,City,City):\n";
	cin >> C2.Address.Country >> C2.Address.City >> C2.Address.Street;
	cout << "Enter your Contact info(Email,Phone,Facebook Account) : ";
	cin >> C2.Address.Contact.Email;
	cin >> C2.Address.Contact.Phone;
	cin >> C2.Address.Contact.FacebookAccount;
	cout << "Second Person Info:\n ";
	cout << "********************************************************************\n";
	cout << "Full Name: " << C2.FullName << endl;
	cout << "Age: " << C2.Age << endl;
	cout << "Gender: " << C2.Gender << endl;
	cout << "Status: " << C2.Status << endl;
	cout << "Address Info:" << endl;
	cout << "Country: " << C2.Address.Country << endl;
	cout << "City: " << C2.Address.City << endl;
	cout << "Street: " << C2.Address.Street << endl;
	cout << "Contact Info: \n";
	cout << "Phone: " << C2.Address.Contact.Phone << endl;
	cout << "Email: " << C2.Address.Contact.Email << endl;
	cout << "Facebook Account: " << C2.Address.Contact.FacebookAccount << endl;
	cout << "********************************************************************\n";
	return 0;
}