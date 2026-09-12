#include <iostream>
using namespace std;
void ReadArrayData(int Arr[100], int& Length)
{
	cout << "How many Numbers you want to enter? " << " 1 to 100?" << endl;
	cin >> Length;
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Please Enter Number " << i + 1 << endl;
		cin >> Arr[i];
	}
}
void PrintArrayData(int Arr[100], int Length)
{
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Number [" << i + 1 << "]" << " is " << Arr[i] << endl;
	 }

}
int CalculateArraySum(int Arr[100], int Length)
{
	int sum = 0;
	for (int i = 0; i <= Length - 1; i++)
	{
		sum += Arr[i];
	}
	return sum;

}
int CalculateArrayAvg(int Arr[100],int Length)
{
	return (float)CalculateArraySum(Arr, Length) / Length;

}
int main()
{
	int Arr[100], Length = 0;
	ReadArrayData(Arr, Length);
	PrintArrayData(Arr, Length);
	cout << "\n****************************************\n";
	cout << "Sum = " << CalculateArraySum(Arr, Length) << endl;
	cout << "Average = " << CalculateArrayAvg(Arr, Length) << endl;
	return 0;
}