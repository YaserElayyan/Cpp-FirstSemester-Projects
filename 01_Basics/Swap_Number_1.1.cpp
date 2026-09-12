#include <iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Enter First Number " << endl;
	cin >> Num1;
	cout << "Enter Second Number " << endl;
	cin >> Num2;
}
void SwapNumbers(int &Num1, int&Num2)
{
	int temp = Num1;
	Num1 = Num2;
	Num2 = temp;
}
void PrintNumbers(int Num1, int Num2)
{
	cout << "Number 1 After Swapping  " << Num1 << endl;
	cout << "Number 2 After Swapping " << Num2 << endl;
}
int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	SwapNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	return 0;
}