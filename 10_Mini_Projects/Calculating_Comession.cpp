#include <iostream>
using namespace std;

int main()
{
    int sales;
    float commission = 0; 
    cout << "Enter How much sales reached: " << endl;
    cin >> sales;

    if (sales >= 1000000)
        commission = sales * 0.01;
    else if (sales >= 500000)
        commission = sales * 0.02;
    else if (sales >= 100000)
        commission = sales * 0.03;
    else if (sales >= 50000)
        commission = sales * 0.05;
    else
        commission = 0;

    if (commission > 0)
        cout << "The commission equals " << commission << endl;
    else
        cout << "There is no commission." << endl;

    return 0;
}