#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int Num;
	cout << "Enter a Number to know its Square, Cube, Forth Power\n";
		cin >> Num;
	cout << "The Square of " << Num << " is " << pow(Num, 2) << endl;
	cout << "The Cube of " << Num << " is " << pow(Num, 3) << endl;
	cout << "The Forth Power of " << Num << " is " << pow(Num, 4) << endl;
	return 0;
}
