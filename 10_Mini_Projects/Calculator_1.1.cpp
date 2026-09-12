#include <iostream>
#include <string>
using namespace std;
enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };
float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << "\n";
	cin >> Number;

	return Number;
}
enOperationType ReadOpType()
{
	char OT = '+';
	cout << "Enter Operation Type: \n";
	cin >> OT;

	return (enOperationType)OT;
}
float Calculate(float Number1, float Number2, enOperationType OT)
{
	switch (OT)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType :: Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1* Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;

	}

}
int main()
{


	float Number1 = ReadNumber("Enter The First Number Please");
	float Number2 = ReadNumber("Enter The Second Number Please");
	enOperationType OT = ReadOpType();
	cout << endl << "The Result is: " << Calculate(Number1, Number2, OT);
	return 0;


}