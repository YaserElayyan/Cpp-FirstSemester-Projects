#include <iostream>
#include <string>
using namespace std;
struct stPiggyBankContent
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};
stPiggyBankContent ReadPiggyBankContent()
{

	stPiggyBankContent PiggyBankContent;
	cout << "Please Enter The Total Number of Pennies: \n";
	cin >> PiggyBankContent.Pennies;
	cout << "Please Enter The Total Number of Nickels: \n";
	cin >> PiggyBankContent.Nickels;
	cout << "Please Enter The Total Number of Dimes: \n";
	cin >> PiggyBankContent.Dimes;
	cout << "Please Enter The Total Number of Quarters: \n ";
	cin >> PiggyBankContent.Quarters;
	cout << "Please Enter The Total Number of Dollars: \n";
	cin >> PiggyBankContent.Dollars;
	return PiggyBankContent;

}
int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
	int TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels*5 + PiggyBankContent.Dimes*10 + PiggyBankContent.Quarters*25 + PiggyBankContent.Dollars*100;
	return TotalPennies;
}
int main()
{
	stPiggyBankContent PiggyBankContent = ReadPiggyBankContent();
	cout << "Total Pennies: " << CalculateTotalPennies(PiggyBankContent) <<" Penny "<< endl;
	cout << "Total Dollars: " <<(float) CalculateTotalPennies(PiggyBankContent) / 100 <<" Dollar "<< endl;
    return 0;
}