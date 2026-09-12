#include <iostream>
using namespace std;
int main()
{
	float Grade;
	cout <<"Enter Your Grade "<<endl;
	cin >> Grade;
	if (Grade >= 90)
	{
		cout << "A" << endl;
	}
	else if (Grade >= 80 && Grade <= 89)
	{
		cout << "B" << endl;
	}
	else if (Grade >= 70 && Grade <= 79)
	{
		cout << "C" << endl;
	}
	else if (Grade >= 60 && Grade <= 69)
	{
		cout << "D" << endl;
	}
	else if (Grade >= 50 && Grade <= 59)
	{
		cout << "E" << endl;
	}
	else
	{
		cout << "F" << endl;
	}
	return 0;
}