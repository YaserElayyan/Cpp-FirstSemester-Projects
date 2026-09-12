#include <iostream>
using namespace std;
struct strInfo
{
	short Age;
	bool DriverLicense;
	bool HasRecommendation;
};
strInfo ReadInfo()
{
	strInfo Info;
	cout << "Enter Your Age:" << endl;
	cin >> Info.Age;
	cout << "Do You Have A Driver License? (1 For Yes,0 For No)" << endl;
	cin >> Info.DriverLicense;
	cout << "Do You Have Recommendation? (1 For Yes,0 For No)" << endl;
	cin >> Info.HasRecommendation;
	return Info;
}
bool Validation(const strInfo &Info)
{
	return ((Info.HasRecommendation)|| (Info.Age >= 21 && Info.DriverLicense));
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
	return 0;
}