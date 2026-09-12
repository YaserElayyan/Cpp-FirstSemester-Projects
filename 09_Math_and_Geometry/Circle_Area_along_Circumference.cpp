#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
const float PI=3.14;
float I;
cout <<"Enter the Value of Circumference "<<endl;
cin >>I;
cout <<"The Area is "<<pow(I,2)/(4*PI);
return 0;
}