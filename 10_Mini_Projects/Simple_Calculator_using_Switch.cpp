#include <iostream>
using namespace std;
int main()
{
	float num1;
	float num2;
	char OT;
	//OT means Operator.
	cout << "Please Enter the Operation\n";
	cin >> OT;
	cout << "Please Enter the First Number you want on the operation\n";
	cin >> num1;
	cout << "Please Enter the Second Number you want on the operation\n";
	cin >> num2;
	switch (OT)
	{
	case '+':
		cout << num1 << "+" << num2 << "= " << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 << "-" << num2 << "= " << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 << "*" << num2 << "= " << num1 * num2 << endl;
		break;
	case'/':
		if (num2 != 0)
		{
			cout << num1 << "/" << num2 << "= " << num1 / num2 << endl;
		}
		else
		{
			cout << "Num2 can't be ZERO\n";
		}
		break;
	default:
		cout << "InValid Operatot\n";
	}
	return 0;
}