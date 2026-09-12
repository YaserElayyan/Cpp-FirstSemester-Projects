#include <iostream>
using namespace std;
int main ()
{
const float PI=3.14;
float A;
cout <<"Enter the Value of A\n";
cin >>A;
cout <<"The Area of the circle that is inscribed in a square is "<< (PI*(A*A))/4;
return 0;
}