#include <iostream>
using namespace std;
enum enColour { Red, Green, Blue, Yellow };
enum enGender { Male, Female };
enum enStatus { Single, Married };
struct stAddress
{
	string country;
	string city;
	string street;
	string buildingnumber;
	string postalcode;

};
struct stContactinfo {

	string Phone;
	string Email;
	stAddress Address;
};
struct stPerson
{
	string FirstName;
	string LastName;
	enStatus Status;
	enGender Gender;
	enColour Colour;
	stContactinfo ContactInfo;
};
int main()
{
	stPerson person1;
	person1.FirstName = "Yaser";
	person1.LastName = "Elayyan";
	person1.Status = enStatus::Single;
	person1.Gender = enGender::Male;
	person1.Colour = enColour::Green;
	person1.ContactInfo.Phone = "+1-555-0142";
	person1.ContactInfo.Email = "yaser.dev@example.com";
	person1.ContactInfo.Address.country = "Freedonia";
	person1.ContactInfo.Address.city = "Springfield";
	person1.ContactInfo.Address.street = "Main Street";
	person1.ContactInfo.Address.postalcode = "00000";
	person1.ContactInfo.Address.buildingnumber = "10";
	cout << "-----------------------------------------------------------" << endl;
	cout << "First Name: " << person1.FirstName << endl;
	cout << "Last Name: " << person1.LastName << endl;
	cout << "Status: " << person1.Status << endl;
	cout << "Gender: " << person1.Gender << endl;
	cout << "Colour: " << person1.Colour << endl;
	cout << "Phone: " << person1.ContactInfo.Phone << endl;
	cout << "Email: " << person1.ContactInfo.Email << endl;
	cout << "Country: " << person1.ContactInfo.Address.country << endl;
	cout << "City: " << person1.ContactInfo.Address.city << endl;
	cout << "Street: " << person1.ContactInfo.Address.street << endl;
	cout << "Building Number: " << person1.ContactInfo.Address.buildingnumber << endl;
	cout << "Postal Code: " << person1.ContactInfo.Address.postalcode << endl;
	cout << "-----------------------------------------------------------" << endl;
	return 0;

}