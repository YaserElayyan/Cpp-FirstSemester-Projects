#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Enter A Number\n";
	cin >> Number;
	return Number;
}
void AddArrayElements(int Number, int Arr[100], int &Length)
{
	Length++;
	Arr[Length - 1] = Number;
}
void UserInputArrayElements(int Arr[100], int& Length)
{
	bool AddMore = true;
	do
	{
		AddArrayElements(ReadNumber(), Arr, Length);

		cout << "Do You Want To Add More Elements : 1[Yes],0[No]\n";
		cin >> AddMore;
	} while (AddMore);
}
void PrintArray(int Arr[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		cout << Arr[i] << " ";
	}
}
int main()
{
	int Arr[100];
	int Length = 0;
	UserInputArrayElements(Arr, Length);
	cout << "\nArray Length: " << Length << endl;
	cout << "Array  Elements: ";
	PrintArray(Arr, Length);
	return 0;  
}