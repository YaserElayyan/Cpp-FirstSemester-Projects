#include <iostream>
using namespace std;
int main ()
{
int A,B;
int temp;
cout <<"Please Enter A Num and B Num\n";
cin >>A>>B;
temp=A;
A=B;
B=temp;
cout <<"After Swap A= "<<A<<"After Swap B= "<<B;
return 0;
}