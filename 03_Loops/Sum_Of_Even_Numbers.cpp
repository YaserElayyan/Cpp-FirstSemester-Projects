#include <iostream>
#include <string>
using namespace std;
enum enOddOrEven { Odd = 1, Even = 2 };
int ReadNumber()
{

	int Number;
	cout << "Enter A Number " << endl;
	cin >> Number;
	return Number;

}
enOddOrEven CheckOddOrEven(int Number)
{
	if ((Number % 2)== 0)
		return enOddOrEven::Even;
	else
		return enOddOrEven::Odd;
}
int SumEvenNumbersFrom1toN_UsingFor(int N)
{
	cout << "Printed Using For Loop ";
	int Sum = 0;
	for (int Counter = 1; Counter <= N; Counter++)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum +=Counter;
		}

	}
	return Sum;
}
int SumEvenNumbersFrom1toN_UsingWhile(int N)
{
	cout << "Printed Using While Loop ";
	int Sum = 0;
	int Counter = 1;
	while (Counter <= N)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum +=Counter;

		}
		Counter++;
	}
	return Sum;
}
int SumEvenNumbersFrom1toN_UsingDoWhile(int N)
{
	cout << "Printed Using While Loop ";
	int Sum = 0;
	int Counter = 1;
	do
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{

			Sum += Counter;

		}
		Counter++;
	} while (Counter <= N);
	return Sum;

}

int main()
{


	int N = ReadNumber();
	cout << SumEvenNumbersFrom1toN_UsingWhile(N);
	cout << SumEvenNumbersFrom1toN_UsingDoWhile(N);
	cout << SumEvenNumbersFrom1toN_UsingFor(N);
	return 0;



}