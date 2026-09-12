#include<iostream>
using namespace std;
void PrintFromAAAtoZZZ()
{
	string word = "";
	for (char i = 'A'; i <= 'Z'; i++)
	{
		for (char j = 'A'; j <= 'Z'; j++)
		{
			for (char k = 'A'; k <= 'Z'; k++)
			{
				word = word + i;
				word = word + j;
				word = word + k;
				cout << word << endl;
				word = "";
			}
		}
	}
}
int main()
{
	PrintFromAAAtoZZZ();
	return 0;
}