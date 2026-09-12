#include <iostream>
#include <cmath>
using namespace std;
int power(int A, int M)
{
	return pow(A, M);

}
int main()
{
	cout << power(10, 2) << endl;
	cout << power(2, 2) << endl;
	return 0;
}