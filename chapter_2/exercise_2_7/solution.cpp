#include <iostream>

void printTime(int hours, int minutes);

int main()
{
	using namespace std;

	int hours;
	cout << "Enter the number of hours: ";
	cin >> hours;

	int minutes;
	cout << "Enter the number of minutes: ";
	cin >> minutes;

	printTime(hours, minutes);

	return 0;
}

void printTime(int hours, int minutes)
{
	using namespace std;

	cout << "Time: " 
		 << hours << ":" << minutes 
		 << endl;
}