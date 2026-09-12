#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{

	int Num;
	cout << "Enter a Number Please:" << endl;
	cin >> Num;
	return Num;

}
void PrintRangeFromNTo1Using_WhileLoop(int N)
{
	int Counter = N;
	cout << "Range Printed Using While Loop " << endl;
	while (Counter >=1)
	{
		cout << Counter << endl;
		Counter--;

	}
}
void PrintRangeFromNTo1Using_DoWhileLoop(int N)
{
	int Counter = N;
	cout << "Range Printed Using Do While Loop " << endl;
	do
	{
		cout << Counter << endl;
		Counter--;
	} while (Counter >= 1);
}
void PrintRangeFromNTo1Using_ForLoop(int N)
{
	cout << "Range Printed Using For Loop " << endl;
	for (int Counter = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

int main()
{


	int N = ReadNumber();
	PrintRangeFromNTo1Using_WhileLoop(N);
	PrintRangeFromNTo1Using_DoWhileLoop(N);
	PrintRangeFromNTo1Using_ForLoop(N);
	return 0;


}
