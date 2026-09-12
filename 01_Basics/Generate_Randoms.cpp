#include <iostream>
#include <cstdlib>
using namespace std;
enum enCharType { CapitalLetter = 1, SmallLetter = 2, SpecialCase = 3,Digit=4};
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
char GetRandomNumber(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SmallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::SpecialCase:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(49, 57));
		break;
	}
	}
	return '\0';
}
int main()
{

	srand((unsigned)time(NULL));
	cout << GetRandomNumber(enCharType::CapitalLetter) << endl;
	cout << GetRandomNumber(enCharType::SmallLetter) << endl;
	cout << GetRandomNumber(enCharType::SpecialCase) << endl;
	cout << GetRandomNumber(enCharType::Digit) << endl;
	return 0;

}