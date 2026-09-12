#include <iostream>
using namespace std;
struct strInfo
{
	short Age;
	bool DriverLicense;

};
strInfo ReadInfo()
{
	strInfo Info;
	cout << "Enter Your Age:" << endl;
	cin >> Info.Age;
	cout << "Do You Have A Driver License (1 For Yes,0 For No)" << endl;
	cin >> Info.DriverLicense;
	return Info;
}
bool Validation(strInfo Info)
{
	return (Info.Age >= 21 && Info.DriverLicense == 1);

}
void PrintResult(strInfo Info)
{
	if (Validation((Info)))
		cout << "\nYou're Hired\n";
	else
		cout << "\nYou're Not Qualified\n";
}
int main()
{
	PrintResult(ReadInfo());
}