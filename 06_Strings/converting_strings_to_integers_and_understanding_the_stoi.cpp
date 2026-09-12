#include <iostream>
#include <string>
using namespace std;
int main()
{
	string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of MyString is: " << MyString.length() << endl;
	cout << MyString[5] << endl;
	string S1 = "AB";
	string S2 = "CD";
	string S3 = S1 + S2;
	cout << "The value of S3 is: " << S3 << endl;
	//int sum = stoi(S1) + stoi(S2);
	//cout << "The sum of S1 and S2 is: " << sum << endl;
	// The above code will cause an error because S1 and S2 cannot be converted to integers using stoi() function.
	return 0;
}
