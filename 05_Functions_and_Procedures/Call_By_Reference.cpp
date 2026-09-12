#include <iostream>
using namespace std;
void MyFunction(int &Num1)
{
	Num1 = 7000;
	cout << "Number inside function became = " << Num1 << endl;
}
int main()
{
	int Num1;
	Num1 = 1000;
	MyFunction(Num1);
	cout << "Number After Calling the Function became = " << Num1 << endl;
	return 0;
}
