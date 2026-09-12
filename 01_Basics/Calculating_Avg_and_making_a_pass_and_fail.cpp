#include <iostream>
using namespace std;
int main()
{
	float Mark1;
	float Mark2;
	float Mark3;
	cout << "Enter Your Marks: " << endl;
	cin >> Mark1 >> Mark2 >> Mark3;
	float sum = Mark1 + Mark2 + Mark3;
	float avg = sum / 3;
	cout << "Your Average is " << avg << endl;
	if (avg >= 50)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
	return 0;
}