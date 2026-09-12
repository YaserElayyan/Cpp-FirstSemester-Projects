#include <iostream>
#include <string>
using namespace std;
void ReadMarks(int Arr[3])
{
	cout << " Enter First Grade " << endl;
	cin >> Arr[0];
	cout << " Enter Second Grade " << endl;
	cin >> Arr[1];
	cout << " Enter Third Grade " << endl;
	cin >> Arr[2];
}
int CalculatingSum(int Arr[3])
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
void PrintAvg(float Avg)
{
	cout << "Your Avg is " << Avg << endl;
}
int main()
{
	int Arr[3];
	ReadMarks(Arr);
	PrintAvg(CalculatingAvg(CalculatingSum(Arr)));
	return 0;
}