#include <iostream>
using namespace std;

	enum color { Red, Orange, Blue, Pink };
	enum directions { North, East, West, South };
	enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	enum gender { Male, Female };
	enum status { Single, Married };
	int main()
	{
		color mycolor = Red;
		directions mydirections = North;
		week myweek = Monday;
		gender mygender = Male;
		status mystatus = Single;
		mycolor = color::Blue;
		mydirections = directions::East;
		myweek = week::Friday;
		mygender = gender::Male;
		mystatus = status::Married;
		cout << "My color is: " << mycolor << endl;
		cout << "My direction is: " << mydirections << endl;
		cout << "My week is: " << myweek << endl;
		cout << "My gender is: " << mygender << endl;
		cout << "My status is: " << mystatus << endl;
		return 0;
	}