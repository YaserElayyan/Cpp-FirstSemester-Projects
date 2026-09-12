#include <iostream>
#include <string>
using namespace std;
enum enPassFail {Pass=1,Fail=2};
void ReadMarks(int Arr[3])
{
	for (int i = 0; i < 3; i++)
	{
		cout << " Enter Grade " << i + 1 << endl;
		cin >> Arr[i];
	}
}
int SumMarks(int Arr[3])
{
	int Sum = 0;
	for (int i = 0; i < 3; i++)
	{
		Sum = Sum + Arr[i];
	}
	return Sum;
}
float CalculatingAvg(int Sum)
{
	return (float) Sum / 3;
}
enPassFail CheckAvg(float Avg)
{
	if (Avg >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
string PrintStatus(float Avg)
{
	if (CheckAvg(Avg) == enPassFail::Pass)
		return "You've Passed";
	else
		return "You've Failed";
}
int main()
{
	int Arr[3];
	ReadMarks(Arr);
	cout << PrintStatus(CalculatingAvg(SumMarks(Arr))) << endl;
	return 0;
}
