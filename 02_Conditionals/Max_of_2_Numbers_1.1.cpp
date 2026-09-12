#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float Arr[2])
{
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter Number " << i + 1 << endl;
		cin >> Arr[i];
	}
}
float CompareNumbers(float Arr[2])
{
	float Max = Arr[0];
	for (int i = 0; i < 2; i++)
	{
		if (Arr[i] > Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}
void PrintMax(float Max)
{
	cout << "The Max Number is " << Max << endl;
}
int main()
{
	float Arr[2];
	ReadNumbers(Arr);
	PrintMax(CompareNumbers(Arr));
	return 0;
}
