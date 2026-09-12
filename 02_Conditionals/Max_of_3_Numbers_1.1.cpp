#include <iostream>
using namespace std;
void ReadNumbers(float Arr[3])
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Number " << i + 1 << endl;
		cin >> Arr[i];
	}
}
float CompareNumbers(float Arr[])
{
	float Max = Arr[0];
	for (int i = 0; i < 3; i++)
	{
		if (Arr[i] > Max)
			Max = Arr[i];
	}
	return Max;
}
void PrintMax(float Max)
{
	cout << "Max is " << Max << endl;
}
int main()
{
	float Arr[3];
	ReadNumbers(Arr);
	PrintMax(CompareNumbers(Arr));
	return 0;
}