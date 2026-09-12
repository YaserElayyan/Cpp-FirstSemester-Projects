#include <iostream>
#include <cmath>
using namespace std;
int ReadNumber(string Message)
{
	int Number = 0;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}
int MyAbs(int Number)
{
	if (Number > 0)
	{
		return Number;
	}
	else
	{
		return Number * -1;
	}
}

int main()
{
	int Number = ReadNumber("Enter A Number Please To Know its Absolute Value\n");
	cout << "My abs Result is: " << MyAbs(Number);
	cout << "\nC++ abs Result is: " << abs(Number);	
	return 0;
}