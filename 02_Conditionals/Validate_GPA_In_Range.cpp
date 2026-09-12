#include <iostream>
#include <cmath>
using namespace std;
float ReadGPA()
{

	float GPA;
	cout << "Enter Your GPA:" << endl;
	cin >> GPA;
	return GPA;
}
bool ValidateGPAInRange(float Number, float From, float To)
{

	return (Number >= From && Number <= To);

}
float ReadGPAUntilBetween(float From, float To)
{
	float GPA;
	do
	{

		GPA = ReadGPA();

	} while (!ValidateGPAInRange(GPA,From, To));

	return GPA;
}
void PrintGPA(float GPA)
{
	cout << "Your GPA is " << GPA;
}
int main()
{
	PrintGPA(ReadGPAUntilBetween(0.0, 100.0));
	return 0;
}