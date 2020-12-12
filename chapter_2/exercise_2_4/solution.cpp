#include <iostream>

int main()
{
	using namespace std;

	int age_years;
	cout << "Enter your age: ";
	cin >> age_years;

	int age_months;
	age_months = age_years * 12;
	cout << "Your age in months is " << age_months << "." << endl;

	return 0;
}