#include <iostream>
using namespace std;
void convert (int seconds)
{
	int days = seconds / (24 * 3600);
	int R = seconds % (24 * 3600);
	int hours = R / (60 * 60);
	int R1 = R % (60 * 60);
	int minutes = R1 / 60;
	int reseconds = R1 % 60;
	cout << "days: " << days << " hours: " << hours << " minutes :" << minutes << " seconds: " << reseconds << endl;
}
int main()
{
	convert(50013);
	convert(999101);
	return 0;

}
