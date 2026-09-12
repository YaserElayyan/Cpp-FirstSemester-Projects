#include <iostream>
using namespace std;
struct strTaskDuration { int Days, Hours, Minutes, Seconds; };
int ReadPositiveNumber(string Message)
{
	int Number = 0;
do
{
		cout << Message << "\n";
		cin >> Number;
} while (Number <= 0);


	return Number;
}
strTaskDuration ReadDuration()
{
	strTaskDuration Duration;
	Duration.Days = ReadPositiveNumber("Enter Number Of Days: ");
	Duration.Hours = ReadPositiveNumber("Enter Number Of Hours: ");
	Duration.Minutes = ReadPositiveNumber("Enter Number Of Minutes");
	Duration.Seconds = ReadPositiveNumber("Enter Number Of Seconds");
	
	return Duration;
}
int CalculateSeconds(strTaskDuration Duration)
{
	
	int DurationInSeconds = Duration.Days * 24 * 60 * 60;
	DurationInSeconds += (Duration.Hours * 60 * 60);
	DurationInSeconds += (Duration.Minutes * 60);
	DurationInSeconds += (Duration.Seconds);


	return DurationInSeconds;

}
void PrintDurationInSeconds(int Seconds)
{

	cout << "Duration in Seconds: " << Seconds;

}
int main()
{
	PrintDurationInSeconds(CalculateSeconds(ReadDuration()));
	return 0;
}