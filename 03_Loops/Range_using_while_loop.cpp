#include <iostream>
using namespace std;
int ReadNumberInRange(const int& From, const int& To)
{
	int Num;
	cout << "Enter a Number between " << From << " and " << To << endl;
	cin >> Num;
	while (Num<From || Num>To)
	{
		cout << "Please Abide By The Range \n";
		cin >> Num;
	}
	return Num;
}
int main()
{
	int NumberInRange=ReadNumberInRange(6, 56);
	cout << "The Number you entered is in range and it's " << NumberInRange << endl;
	return 0;

}

