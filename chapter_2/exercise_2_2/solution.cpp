#include <iostream>

int main()
{
	using namespace std;

	double furlongs;
	cout << "Enter distance in furlongs: ";
	cin >> furlongs;
	
	double yards;
	yards = furlongs * 220;
	cout << "Distance in yards = " << yards << endl;

	return 0;
}