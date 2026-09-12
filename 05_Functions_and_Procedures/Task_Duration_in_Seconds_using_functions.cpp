#include <iostream>
using namespace std;
void duration(float days, float hours, float minutes, float seconds)
{
	float A = days * 24 * 60 * 60;
	float B = hours * 60 * 60;
	float C = minutes * 60;
	cout << A+B+C+seconds <<" Seconds"<<endl;
}
int main()
{
	duration(5, 5, 5, 5);
	duration(3, 4, 2, 2);
	return 0;
}
