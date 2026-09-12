#include <iostream>
#include <string>
using namespace std;
int main()
{
	string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of MyString is: " << MyString.length() << endl;
	cout << MyString[5] << endl;
	string S1 = "10";
	string S2 = "20";
	string S3 = S1 + S2;
	cout << "The value of S3 is: " << S3 << endl;
	int sum = stoi(S1) + stoi(S2);
	cout << "The sum of S1 and S2 is: " << sum << endl;
	return 0;
}