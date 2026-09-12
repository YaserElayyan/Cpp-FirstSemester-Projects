#include <iostream>
#include <string>
using namespace std;
enum enEvenOrOdd { Odd = 1, Even = 2 };
int ReadNumber()
{

	int Number;
	cout << "Enter a Number: " << endl;
	cin >> Number;
	return Number;

}
enEvenOrOdd CheckEvenOrOddNumbers(int N)
{
	if ((N % 2) != 0)
		return enEvenOrOdd::Odd;
	else
		return enEvenOrOdd::Even;
}

int SumOfOddNumbersFrom1toN_UsingDoWhileLoop(int N)
{
	cout << "Using Do While Loop " << endl;
	int Sum = 0;
	int Counter = 1;
	do
	{
		if (CheckEvenOrOddNumbers(Counter) == enEvenOrOdd::Odd)
		{
			Sum += Counter;
		}
		Counter++;

		
	} while (Counter <= N);
	return Sum;

}
int SumOfOddNumbersFrom1toN_UsingForLoop(int N)
{
	cout << "Using For Loop " << endl;
	int Sum = 0;
	for (int Counter = 1; Counter <= N; Counter++)
	{
		if (CheckEvenOrOddNumbers(Counter) == enEvenOrOdd::Odd)
		{
			Sum += Counter;

		}
	}
	return Sum;
}
int SumOfOddNumbersFrom1toN_UsingWhileLoop(int N)
{
	cout << "Using While Loop " << endl;
	int Sum = 0;
	int Counter = 1;
	while (Counter <= N)
	{
		if (CheckEvenOrOddNumbers(Counter) == enEvenOrOdd::Odd)
		{

			Sum += Counter;

		}
		Counter++;
	
	}
	return Sum;
}

int main()
{
	int N = ReadNumber();
	cout << SumOfOddNumbersFrom1toN_UsingWhileLoop(N) << endl;
	cout << SumOfOddNumbersFrom1toN_UsingDoWhileLoop(N) << endl;
	cout << SumOfOddNumbersFrom1toN_UsingForLoop(N) << endl;
	return 0;




}