#include <iostream>
#include <string>
using namespace std;
struct strGrades
{
	float Grade1;
	float Grade2;
	float Grade3;
	float Grade4;
	float Grade5;
	float Avg;
};
void ReadInfo(strGrades& info)
{
	cout << "Please Enter First Grade: " << endl;
	cin >> info.Grade1;
	cout << "Please Enter Second Grade: " << endl;
	cin >> info.Grade2;
	cout << "Please Enter Third Grade: " << endl;
	cin >> info.Grade3;
	cout << "Please Enter Fourth Grade: " << endl;
	cin >> info.Grade4;
	cout << "Please Enter Fifth Grade: " << endl;
	cin >> info.Grade5;
	info.Avg = (info.Grade1 + info.Grade2 + info.Grade3 + info.Grade4 + info.Grade5) / 5;
	cin.ignore();
}
void PrintInfo(strGrades info)
{
	cout << "Your Grades are: " << endl;
	cout << "Grade 1: " << info.Grade1 << endl;
	cout << "Grade 2: " << info.Grade2 << endl;
	cout << "Grade 3: " << info.Grade3 << endl;
	cout << "Garde 4: " << info.Grade4 << endl;
	cout << "Grade 5: " << info.Grade5 << endl;
	cout << "Your Avg: " << info.Avg << endl;
	cout << "***********************************************\n";
	string Status1 = "Pass";
	string Status2 = "Fall";
	if (info.Avg>=50)
	{
		cout<<"Your Status: "<< Status1;

	}
	else
	{
		cout <<"Your Status: "<< Status2;
	}
}
void ReadInfoo(strGrades Person[5])
{
	ReadInfo(Person[0]);
	ReadInfo(Person[1]);
	ReadInfo(Person[2]);
	ReadInfo(Person[3]);
	ReadInfo(Person[4]);
}
void PrintInfoo(strGrades Person[5])
{
	PrintInfo(Person[0]);
	PrintInfo(Person[1]);
	PrintInfo(Person[2]);
	PrintInfo(Person[3]);
	PrintInfo(Person[4]);

}
int main()
{
	strGrades Person[5];
	ReadInfoo(Person);
	PrintInfoo(Person);
	return 0;
}