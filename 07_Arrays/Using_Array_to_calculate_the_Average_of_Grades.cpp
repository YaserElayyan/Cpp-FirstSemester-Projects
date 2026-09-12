#include <iostream>
using namespace std;
int main()
{
	float Grades[3];
	cout << "Enter your 3 Grades " << endl;
	cin >> Grades[0] >> Grades[1] >> Grades[2];
	cout << "\n";
	cout << "The Average of the three Marks you entered is " << (Grades[0] + Grades[1] + Grades[2]) / 3 << endl;
	return 0;
}