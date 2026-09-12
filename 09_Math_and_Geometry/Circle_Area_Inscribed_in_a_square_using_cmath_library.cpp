#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
const float PI=3.14;
float A;
cout <<"Please Enter the Value of the side of the square\n";
cin >>A;
float Area=(PI*pow(A,2))/4;
cout <<"The Area of the circle is "<<Area;
return 0;
}