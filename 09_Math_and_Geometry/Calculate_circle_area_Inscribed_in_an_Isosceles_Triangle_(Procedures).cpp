#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void CII(float a,float b)
{//CII stands for circle area Inscribed in an Isosceles Triangle

const float PI=3.14;
cout <<"The Area is: " <<(PI*((pow(b,2))/4))*((2*a-b)/(2*a+b))<<endl;



}

int main ()
{

CII(4,5);
CII(3.1,4.22);
return 0;
}

