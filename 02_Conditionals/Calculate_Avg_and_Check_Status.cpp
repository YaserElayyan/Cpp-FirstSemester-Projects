#include <iostream>
#include <string>
using namespace std;
enum enPassFail {Pass=1,Fail=2};
void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Enter First Grade " << endl;
	cin >> Mark1;
	cout << "Enter Second Grade " << endl;
	cin >> Mark2;
	cout << "Enter Third Grade " << endl;
	cin >> Mark3;
}
int SumMarks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}
float AvgMarks(int Sum)
{
	return (float) Sum / 3;
}
enPassFail CheckStatus(float Avg)
{
	if (Avg >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void PrintStaus(float Avg)
{
	cout << "Your Avg is " << Avg << endl;
	if (CheckStatus(Avg) == enPassFail::Pass)
		cout << "You've Passed" << endl;
	else
		cout << "You've Failed" << endl;
}
int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintStaus((AvgMarks(SumMarks(Mark1, Mark2, Mark3))));
	return 0;
}