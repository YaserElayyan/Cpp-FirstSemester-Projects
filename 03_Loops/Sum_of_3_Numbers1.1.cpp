#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please Eneter First Grade: " << endl;
	cin >> Mark1;
	cout << "Please Eneter Second Grade: " << endl;
	cin >> Mark2;
	cout << "Please Eneter Third Grade: " << endl;
	cin >> Mark3;
}
int SumNumbers(int Mark1, int Mark2, int Mark3)
{
	int Total = Mark1 + Mark2 + Mark3;
	return Total;
}
void PrintSum(int Total)
{
	cout << "The Total Of The Three Numbers You Entered is " << Total << endl;
}
int main()
{
	int Mark1, Mark2, Mark3;
	ReadNumbers(Mark1, Mark2, Mark3);
	PrintSum(SumNumbers(Mark1, Mark2, Mark3));
	return 0;
}