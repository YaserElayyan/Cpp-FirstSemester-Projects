#include <iostream>
using namespace std;
int main ()
{
int score;
cout <<"Please Enter Your Score "<<endl;
cin >>score;
{
if (score>=90)
cout <<"The Grade is A "<<endl;
else if (score>=80)
cout <<"The Grade is B "<<endl;
else if (score>=70)
cout <<"The Grade is C "<<endl;
else if (score>=60)
cout <<"The Grade is D "<<endl;
else 
cout <<"The Grade is F "<<endl;
}
return 0;
}