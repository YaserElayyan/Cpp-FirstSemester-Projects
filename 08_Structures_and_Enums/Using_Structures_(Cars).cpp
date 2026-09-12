#include <iostream>
using namespace std;
struct Car
{
	string Brand;
	string Model;
	int Year;
};
int main()
{
	Car MyCar1;
	MyCar1.Brand = "BMW";
	MyCar1.Model = "X5";
	MyCar1.Year = 1999;
	cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << endl;
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