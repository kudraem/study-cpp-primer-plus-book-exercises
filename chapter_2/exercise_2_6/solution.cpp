#include <iostream>

double convertLightYearsToAstroUnits(double light_years);

int main()
{
	using namespace std;

	double light_years;
	cout << "Enter the number of light years: ";
	cin >> light_years;

	cout << light_years
		 << " light years = "
		 << convertLightYearsToAstroUnits(light_years)
		 << " astronomical units."
		 << endl; 

	return 0;
}

double convertLightYearsToAstroUnits(double light_years)
{
	return light_years * 63240;
}