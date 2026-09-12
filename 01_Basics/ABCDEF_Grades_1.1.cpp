#include <iostream>
using namespace std;
int ReadNumber(int From, int To)
{
	int Grade;
	do
	{
		cout << "Enter a Grade Betweem " << From << " and " << To << "\n";
		cin >> Grade;
	} while (Grade < From || Grade>To);
	return Grade;
}
char GetGrade(int Grade)
{


	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';

}
int main()
{
	int N = ReadNumber(50, 100);
	cout << endl << "Result: " << GetGrade(N) << endl;
	return 0;
}