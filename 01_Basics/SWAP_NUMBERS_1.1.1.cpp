#include <iostream>
#include <utility>
using namespace std;
void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Enter Number 1" << endl;
	cin >> Num1;
	cout << "Enter Number 2" << endl;
	cin >> Num2;
}
void SwapNumbers(int& Num1, int& Num2)
{
	swap(Num1, Num2);
}
void PrintNumbers(int Num1, int Num2)
{
	cout << "First Number After Swapping is " << Num1 << endl;
	cout << "Second Number After Swapping is " << Num2 << endl;
}
int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	SwapNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	return 0;
}