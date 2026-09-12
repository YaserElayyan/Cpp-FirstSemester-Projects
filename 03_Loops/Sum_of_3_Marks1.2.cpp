#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int Arr[3])
{
	cout << "Please Eneter First Grade: " << endl;
	cin >> Arr[0];
	cout << "Please Eneter Second Grade: " << endl;
	cin >> Arr[1];
	cout << "Please Eneter Third Grade: " << endl;
	cin >> Arr[2];
}
int SumNumbers(int Arr[3])
{
	int Total = 0;
	for (int i = 0; i < 3; i++)
	{
		Total = Total + Arr[i];
	}

	return Total;
}
void PrintSum(int Total)
{
	cout << "The Total Of The Three Numbers You Entered is " << Total << endl;
}
int main()
{
	int Arr[3];
	ReadNumbers(Arr);
	PrintSum(SumNumbers(Arr));
	return 0;
}