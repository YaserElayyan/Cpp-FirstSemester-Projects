#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1 = "43.22";
	int num_int = stoi(str1);
	float num_float = stof(str1);
	double num_double = stod(str1);
	cout <<num_int  << endl;
	cout << num_float << endl;
	cout << num_double << endl;
	int N1 = 20;
	double N2 = 33.5;
	string st1, st2, st3;
	st1 = to_string(N1);
	st2 = to_string(N2);
	cout << st1 << endl;
	cout << st2 << endl;
	float N3 = 55.23;
	N3 = static_cast<int>(N3);
	cout << N3 << endl;
	st3 = to_string(N3);
	cout << st3 << endl;
	return 0;
}