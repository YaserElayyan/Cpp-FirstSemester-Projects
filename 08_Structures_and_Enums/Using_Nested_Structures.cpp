#include <iostream>
#include <string>
using namespace std;
struct stAddress
{
	string City;
	string Street;
	string BuildingNumber;
};
struct stOwner
{
	string FullName;
	string Phone;
	stAddress Address;
};
struct Car
{
	string Brand;
	string Model;
	int Year;
	stOwner Owner;
	stAddress CarAddress;
};
int main()
{
	Car MyCar1;
	MyCar1.Brand = "BMW";
	MyCar1.Model = "X5";
	MyCar1.Year = 1999;
	MyCar1.Owner.FullName = "Yaser Elayyan";
	MyCar1.Owner.Phone = "+1-555-0142" ;
	MyCar1.Owner.Address.BuildingNumber = "10";
	MyCar1.Owner.Address.City = "Springfield";
	MyCar1.Owner.Address.Street = "Main Street";
	cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << endl;
	cout << "Owner: " << MyCar1.Owner.FullName << " " << MyCar1.Owner.Phone << endl;
	cout << "Owner Address: " << MyCar1.Owner.Address.City << " " << MyCar1.Owner.Address.Street << " " << MyCar1.Owner.Address.BuildingNumber << endl;	
	Car MyCar2;
	MyCar2.Brand = "Mercedes";
	MyCar2.Model = "cls";
	MyCar2.Year = 2019;
	cout << MyCar2.Brand << " " << MyCar2.Model << " " << MyCar2.Year << endl;
	Car MyCar3;
	MyCar3.Brand = "Ford";
	MyCar3.Model = "Mustang";
	MyCar3.Year = 1969;
	cout << MyCar3.Brand << " " << MyCar3.Model << " " << MyCar3.Year << endl;
	return 0;
}