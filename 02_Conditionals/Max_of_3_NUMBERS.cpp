#include <iostream>
using namespace std;
void ReadNumbers(int& A, int& B, int& C)
{
	cout << "Enter First Number" << endl;
	cin >> A;
	cout << "Enter Second Number" << endl;
	cin >> B;
	cout << "Enter Third Number" << endl;
	cin >> C;
}
int CompareNumbers(int A, int B, int C)
{
	int Max;
	if (A >= B && A >= C)
		return Max = A;
	else if (B >= A && B >= C)
		return Max = B;
	else
		return Max = C;
}
void PrintNumbers(int Max)
{
	cout << "Max Number is " << Max << endl;
}
int main()
{
	int A, B, C;
	ReadNumbers(A, B, C);
	PrintNumbers(CompareNumbers(A, B, C));
	return 0;
}