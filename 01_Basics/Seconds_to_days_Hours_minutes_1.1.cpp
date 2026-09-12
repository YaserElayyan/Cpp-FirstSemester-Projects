#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct strTaskDuration { int Days, Hours, Minutes, Seconds; };
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;
	}while (Number <= 0);

	return Number;

}
strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{

	strTaskDuration TaskDuration;

	int Remainder = 0;
	int const SecondsPerDay = 24 * 60 * 60;
	int const SecondsPerHour = 60 * 60;
	int const SecondsPerMinute = 60;

	TaskDuration.Days = floor (TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	TaskDuration.Hours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;
	TaskDuration.Minutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;
	TaskDuration.Seconds = floor(Remainder);


	return TaskDuration;



}
void PrintTaskDuration(strTaskDuration TaskDuration)
{

	cout << "Task Duration: \n"
		 << "Days:" << TaskDuration.Days
		 << " Hours:" << TaskDuration.Hours
		 << " Minutes:" << TaskDuration.Minutes 
		 << " Seconds:" << TaskDuration.Seconds
		 << " \n ";
}
int main()
{
	int TotalSeconds = ReadPositiveNumber("Enter Total Seconds ");

	PrintTaskDuration(SecondsToTaskDuration(TotalSeconds));


	return 0;
}