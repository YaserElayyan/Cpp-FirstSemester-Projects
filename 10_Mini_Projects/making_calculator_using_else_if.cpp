#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num1;
	int num2;
	string OT;
	//OT stands for Operator.
	cout << "Please Enter Operation Type(+,-,*,/)\n";
	cin >> OT;
	cout << "Enter The First Number Please: \n";
	cin >> num1;
	cout << "Enter The Second Number Please: \n";
	cin >> num2;
	if (OT == "+")
		cout << num1 << "+" << num2 << "= " << num1 + num2 << endl;
	else if (OT == "-")
		cout << num1 << "-" << num2 << "= " << num1 - num2 << endl;
	else if (OT == "*")
		cout << num1 << "*" << num2 << "= " << num1 * num2 << endl;
	else if (OT == "/")
	{
		if (num2 == 0)
		{
			cout << "Impossible Calculation\n";
		}
		else {
			cout << num1 << "/" << num2 << "= " << num1 / num2 << endl;
		}
	}
	else
		cout << "Invalid Operator" << endl;
	return 0;
}