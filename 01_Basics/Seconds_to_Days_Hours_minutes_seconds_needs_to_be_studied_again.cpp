#include <iostream>
using namespace std;
int main()
{
    int total_seconds;
    cout << "Please enter the Number of Seconds: ";
    cin >> total_seconds;
    int days = total_seconds / (24 * 3600);
    int remaining_seconds = total_seconds % (24 * 3600);
    int hours = remaining_seconds / 3600;
    remaining_seconds %= 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;   
    cout << "Days: " << days << endl;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}


