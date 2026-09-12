#include <iostream>
using namespace std;
int ReadNumber()
{

	int Number;
	cout << "Enter a Number: \n";
	cin >> Number;
	return Number;

}
int ReadPower()
{

	int Power;
	cout << "Enter the Power: \n";
	cin >> Power;
	return Power;

}
int PowerofM(int Number, int M)
{
	if (M == 0)
	{
		return 1;
	}
	else
	{
		int P = 1;
		for (int i = 1; i <= M; i++)
		{
			P *= Number;
		}
		return P;
	}
}

int main()
{


	int Number = ReadNumber();
	int Power = ReadPower();
	cout << "Result: " << PowerofM(Number, Power);
	return 0;

}