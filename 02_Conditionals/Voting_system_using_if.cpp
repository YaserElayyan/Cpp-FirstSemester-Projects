#include <iostream>
using namespace std;
int main ()
{
int Age;
cout <<"Please Enter Your Age "<<endl;
cin >>Age;
if (Age>18)
{
cout <<"He is Eligible to Vote "<<endl;
cout <<"He is No Longer a Minor "<<endl;
}
else 
{
cout <<"He can't vote "<<endl;
cout <<"He is a Minor "<<endl;
}
return 0;
}