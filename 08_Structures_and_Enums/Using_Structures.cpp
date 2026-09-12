#include <iostream>
#include <string>
using namespace std;
struct strAddress
{
	string City;
	string Country;
};
struct strOwner
{
	string Name;
	strAddress Address;
};
struct strCar
{
	string Brand;
	string Model;
	short Year;
	strOwner Owner;
};
int main()
{
	strCar MyCar1, MyCar2;
	MyCar1.Brand = "Mercedes";
	MyCar1.Model = "CLS";
	MyCar1.Year = 2012;
	MyCar1.Owner.Name = "Yaser Elayyan";
	MyCar1.Owner.Address.City = "Springfield";
	MyCar1.Owner.Address.Country = "Freedonia";
	MyCar2.Brand = "BMW";
	MyCar2.Model = "X5";
	MyCar2.Year = 2013;
	MyCar2.Owner.Name = "Omar Khalid";
	MyCar2.Owner.Address.City = "Rivertown";
	MyCar2.Owner.Address.Country = "Freedonia";
	cout << "First Car info:\n";
	cout << "*********************************************************\n";
	cout << "Brand: " << MyCar1.Brand << endl;
	cout << "Model: " << MyCar1.Model << endl;
	cout << "Year: " << MyCar1.Year << endl;
	cout << "Owner's Name: " << MyCar1.Owner.Name << endl;
	cout << "Owner's Address:\n";
	cout << "Country: " << MyCar1.Owner.Address.Country << endl;
	cout << "City: " << MyCar1.Owner.Address.City << endl;
	cout << "*********************************************************\n";
	cout << "\n";
	cout << "Second Car info:\n";
	cout << "*********************************************************\n";
	cout << "Brand: " << MyCar2.Brand << endl;
	cout << "Model: " << MyCar2.Model << endl;
	cout << "Year: " << MyCar2.Year << endl;
	cout << "Owner's Name: " << MyCar2.Owner.Name << endl;
	cout << "Owner's Address:\n";
	cout << "Country: " << MyCar2.Owner.Address.Country << endl;
	cout << "City: " << MyCar2.Owner.Address.City << endl;
	cout << "*********************************************************\n";
	return 0;
}