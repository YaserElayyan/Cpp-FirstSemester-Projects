#include <iostream>
#include <cmath>
using namespace std;
int ReadNumber()
{

	int Num;
	cout << "Enter A Number Please " << endl;
	cin >> Num;
	return Num;

}
void PrintNumberRange1ToNUsing_WhileLoop(int N)
{
	cout << "Range Printed Using While Loop" << endl;
	int Counter = 0;
	while (Counter <N)
	{
		Counter++;
		cout << Counter;
		cout << endl;

	}
}
void PrintNumberRange1ToNUsing_DoWhileLoop(int N)
{
	cout << "Range Printed Using Do While Loop" << endl;

	int Counter = 0;
	do
	{
		Counter++;
		cout << Counter;
		cout << endl;

	} while (Counter < N);

}
void PrintNumberRange1ToNUsing_ForLoop(int N)
{
	cout << "Range Printed Using For Loop" << endl;

	for (int Counter = 1; Counter <= N; Counter++)
	{
		cout << Counter;
		cout << endl;

	}
}
int main()

{

	int N = ReadNumber();
	PrintNumberRange1ToNUsing_WhileLoop(N);
	PrintNumberRange1ToNUsing_DoWhileLoop(N);
	PrintNumberRange1ToNUsing_ForLoop(N);
	return 0;


}