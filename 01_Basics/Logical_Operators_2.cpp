#include <iostream>
using namespace std;
int main()
{
	cout << ((5 > 6 && 7 == 7) || (1 || 0)) << endl;
	cout << ((!(5 > 6) && 7 == 7) || (1 || 0)) << endl;
	cout << ((!(5 > 6) && 7 == 7) || !(1 || 0)) << endl;
	cout << ((!(5 > 6) || (7 == 7) && !(1 || 0))) << endl;
	cout << (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && 1) << endl;
	cout << ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3) || 1) << endl;
		return 0;
}