#include <random>
#include <iostream>

using namespace std;

int main()
{
	int NUM2;
	int NUM = ((rand() % 100) + 1);
	cout << "Enter Number" << endl;
	cin >> NUM2;
	
	if (NUM == NUM2)
	{
		cout << "Correct" << endl;
	}
	else if (NUM < NUM2)
	{
		cout << "To Low" << endl;
	}
	else if (NUM > NUM2)
	{
		cout << "To High" << endl;
	}
	return 0;
}
