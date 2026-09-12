#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);
	
	return Number;

}
bool IsPerfectNumber(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}
	return Sum == Number;
}
void PrintPerfectNumber(int Number)
{
	cout << "Perfect Numbers are: " << endl;
	for (int i = 1; i <= Number; i++)
	{
		if (IsPerfectNumber(i))
			cout << i << endl;
	}
}
int main()
{
	PrintPerfectNumber(ReadPositiveNumber("Enter a Positive Number"));
	return 0;
}