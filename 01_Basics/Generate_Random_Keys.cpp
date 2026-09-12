#include <iostream>
#include <cstdlib>
using namespace std;
enum enCharType { CapitalLetter = 1, SmallLetter = 2, SpecialCase = 3, Digit = 4 };
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;
	} while (Number <= 0);

	return Number;
}
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}
char GetCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65,90));
		break;
	}
	case enCharType::SmallLetter:
	{
		return char(RandomNumber(97,122));
		break;
	}
	case enCharType::SpecialCase:
	{
		return char(RandomNumber(33,47));
		break;
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(48,57));
		break;
	}
	}
	return '\0';
}
string GenerateKey(enCharType CharType, int Length)
{
	string Word;
	for (int i = 1; i <= 4; i++)
	{
		Word = Word + GetCharacter(CharType);
	}
	return Word;
}
string GenerateKeys()
{
	string Key;
	Key = GenerateKey(enCharType::CapitalLetter, 4) + "-";
	Key = Key+GenerateKey(enCharType::CapitalLetter, 4) + "-";
	Key = Key+GenerateKey(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateKey(enCharType::CapitalLetter, 4);
	return Key;
}
void GeneratesKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout <<"Key["<<i<<"]:"<< GenerateKeys() << endl;

	}
}
int main()
{
	srand((unsigned)time(NULL));
	GeneratesKeys(ReadPositiveNumber("Enter The Number Of Codes You Want To Generate\n"));
	return 0;
}