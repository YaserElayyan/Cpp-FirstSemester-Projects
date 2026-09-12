#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2, str3,str4;
	cout << "Enter the first string: ";
	getline(cin, str1);
	cout << "The first string is: " << str1 << endl;
	cout << "Enter the second string " << endl;
	cin >> str2;
	cout << "\n";
	cout << " The second string is: " << str2 << endl;
	cin >> str3;
	cout << " The third string is: " << str3 << endl;
	cout << "*********************************************************************" << endl;
	cout << "The length of the first string is: " << str1.length() << endl;
	cout << "The Characters at 0,2,4,7 : " << str1[0] << str1[2] << str1[4] << str1[7];
	str4 = str2 + str3;
	cout << "\n The concatenated string is: " << str4 << endl;
	int sum = stoi(str2) + stoi(str3);
	cout << "The sum of the two strings is: " << sum << endl;
	cout << "*********************************************************************" << endl;
	return 0;
}