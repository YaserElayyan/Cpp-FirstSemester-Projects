#include <iostream>
#include <cmath>
using namespace std;
int ReadAge()
{
	int Age;
	cout << "Enter Your Age: " << endl;
	cin >> Age;
	return Age;
}

bool ValidateAgeInRange(int Number, int From, int To)
{

	return (Number >= From && Number <= To);

}
void PrintResult(int Age)
{
	if (ValidateAgeInRange(Age, 18, 45))
		cout << "Valid Age" << endl;
	else
		cout << "InValid Age" << endl;
}
int main()
{
	PrintResult(ReadAge());
	return 0;
}