#include <iostream>
using namespace std;
void ReadArrayFunction(float Grades[3])
{
	cout << "Please Enter the First Value " << endl;
	cin >> Grades[0];
	cout << "Please Enter the Second Value " << endl;
	cin >> Grades[1];
	cout << "Please Enter the Third Value " << endl;
	cin >> Grades [2];
}
void PrintArrayFunction(float Grades[3])
{
	cout << "The First Value is " << Grades[0] << endl;
	cout << "The Second Value is " << Grades [1] << endl;
	cout << "The Third Value is " << Grades [2] << endl;
}
float AVG (float Grades[3])
{
	float sum = Grades[0] + Grades[1] + Grades[2];
	float avg = sum / 3;
	return avg;

}
int main()    
{
	float Grades[3];
	ReadArrayFunction(Grades); //when we call the array we just use one integer.
	PrintArrayFunction(Grades);
	cout<<"The Average is "<<AVG(Grades);
	return 0;
}
