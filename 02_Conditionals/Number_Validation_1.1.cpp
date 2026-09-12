#include <iostream>
#include <string>
#include <limits>
using namespace std;
int ReadNumber(string Message)
{
	int Number = 0;
	cout << Message << "\n";
	cin >> Number;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid Number, Enter a Valid Number\n";
		cin >> Number;
	}

	return Number;
}
int main()
{
	int Number = ReadNumber("Enter a Positive Number\n");
	cout << "Your Number is " << Number << endl;
	return 0;
}