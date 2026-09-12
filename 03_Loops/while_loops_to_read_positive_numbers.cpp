#include <iostream>
using namespace std;
int main ()
{
int Number;
cout <<"Please Enter a Positive Number\n";
cin >>Number;
while (Number <0)
{
cout <<"Wrong Number, Please Enter a Positive Number\n";
cin >>Number;
}
cout <<"The Number you Entered is "<<Number<<endl;
return 0;
}