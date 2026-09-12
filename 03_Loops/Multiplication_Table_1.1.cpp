#include <iostream>
using namespace std;
void PrintTableHeader()
{
	cout << "\n\n\t\tMultiplication Table From 1 To 10\t\t\n\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i << "   ";
	}
	cout << "\n";
	cout << "--------------------------------------------------------------------------------------------------\n";
}
string ColumnSperator(int j)
{

	if (j < 10)
		return "   |";
	else
		return "  |";

}
void PrintSideandMultiply()
{
	PrintTableHeader();
	for (int j = 1; j <= 10; j++)
	{
		cout << j << ColumnSperator(j) << "\t";
		for (int i = 1; i <= 10; i++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}
int main()
{
	PrintSideandMultiply();
	return 0;
}