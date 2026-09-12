#include <iostream>
using namespace std;
int main ()
{
const float PI=3.14;
float circum;
cout <<"Enter the Circumference of the Circle to calculate its Area"<<endl;
cin >>circum;
float Area=(circum*circum)/(4*PI);
cout <<"The Area of the Circle "<<Area<<endl;
return 0;
}