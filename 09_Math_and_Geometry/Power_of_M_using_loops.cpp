#include <iostream>
using namespace std;
int main()
{
	int Num;
	int result = 1;
	int Power;
	cout << "Please enter the number and its power\n";
	cin >> Num >> Power;
	int a = Power;
	while (Power >= 1)
	{
		result = Num * result;
		Power--;
	}
	cout << Num << " To the Power " << a << " is " << result << endl;
	return 0;
}