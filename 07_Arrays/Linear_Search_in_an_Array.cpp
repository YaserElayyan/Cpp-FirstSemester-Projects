#include <iostream>
using namespace std;
int main()
{
	int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
	int Searchfor = 20;
	for (int i = 0; i < 10; i++)
	{
		cout << "We are at Iteration " << i + 1 << endl;
		if (arr[i] == Searchfor)
		{
			cout <<"The Position of " << Searchfor << " is " << i + 1 << endl;
			break;

		}
	}
	return 0;
}