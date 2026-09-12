#include <iostream>
using namespace std;
int main ()
{
float billvalue;
cout <<"Can you enter the bill value\n";
cin >>billvalue;
float servicefees=billvalue*0.1;
float salestax=billvalue*0.16;
cout <<"Your Service fees is "<<servicefees<<endl;
cout <<"And the Sales Tax is " << salestax<<endl;
cout << "And this makes your total bill is "<<billvalue+salestax+servicefees<<endl;
return 0;
}