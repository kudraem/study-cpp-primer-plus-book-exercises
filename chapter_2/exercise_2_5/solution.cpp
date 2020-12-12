#include <iostream>

double convertCelsToFahrTemp(double cels_temp);

int main()
{
	using namespace std;

	double cels_temp;
	cout << "Please enter a Celsius value: ";
	cin >> cels_temp;

	cout << cels_temp
		 << " degrees Cesius is "
		 << convertCelsToFahrTemp(cels_temp)
		 << " degrees Fahrenheit."
		 << endl;

	return 0;
}

double convertCelsToFahrTemp(double cels_temp)
{
	return 1.8 * cels_temp + 32;
}