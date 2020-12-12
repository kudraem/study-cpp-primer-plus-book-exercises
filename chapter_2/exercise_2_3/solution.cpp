#include <iostream>

void printPhrase1();
void printPhrase2();

int main()
{
	printPhrase1();
	printPhrase1();

	printPhrase2();
	printPhrase2();

	return 0;
}

void printPhrase1()
{
	using namespace std;

	cout << "Three blind mice" << endl;
}

void printPhrase2()
{
	using namespace std;

	cout << "See how they run" << endl;
}