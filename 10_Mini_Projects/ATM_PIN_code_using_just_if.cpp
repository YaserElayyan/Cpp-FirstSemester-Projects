#include <iostream>
#include <string>
using namespace std;
int main ()
{
string PIN;
cout <<"Please Enter Your 4 digits PIN code "<<endl;
cin >>PIN;
if (PIN=="1234")
{
cout <<"Correct PIN code"<<endl;

}
else
{
cout <<"Wrong PIN code"<<endl;
}
return 0;
}