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
	MyCar1.Brand;
	MyCar1.Model;
	MyCar1.Year;
	cout << "Enter the brand, model and year of your first car: ";
	cin >> MyCar1.Brand >> MyCar1.Model >> MyCar1.Year;
	cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << endl;
	cout << "Enter the brand, model and year of your second car: ";
	Car MyCar2;
	MyCar2.Brand;
	MyCar2.Model;
	MyCar2.Year;
	cin >> MyCar2.Brand >> MyCar2.Model >> MyCar2.Year;
	cout << MyCar2.Brand << " " << MyCar2.Model << " " << MyCar2.Year << endl;
	Car MyCar3;
	MyCar3.Brand;
	MyCar3.Model;
	MyCar3.Year;
	cout << "Enter the brand, model and year of your third car: ";
	cin >> MyCar3.Brand >> MyCar3.Model >> MyCar3.Year;
	cout << MyCar3.Brand << " " << MyCar3.Model << " " << MyCar3.Year << endl;
	return 0;
}