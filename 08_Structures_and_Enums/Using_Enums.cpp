#include <iostream>
using namespace std;
enum colors { Red, Green, Blue, Yellow };
enum Direction { North, South, East, West };
enum week { Saturday, Sunday, Monday, Tuesday, Wedensday, Thursaday, Friday };
enum Gender { Male, Female };
enum Status { Single, Married };
int main()
{
	colors MyColor;
	MyColor =colors::Yellow;
	cout << "My Color is " << MyColor;
	cout << "\n";
	Direction MyDirection;
	MyDirection = Direction::North;
	cout << "My Direction is " << MyDirection;
	cout << "\n";
	week MyDay;
	MyDay = week::Monday;
	cout << "My Day is " << MyDay;
	cout << "\n";
	Gender MyGender;
	MyGender = Gender::Male;
	cout << "My Gender is " << MyGender << endl;
	Status MyStatus;
	MyStatus = Status::Single;
	cout << "My Status is " << MyStatus;
	return 0;


}