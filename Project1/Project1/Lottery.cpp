#include <random>
#include <iostream>

using namespace std;

int main()
{
	int NUM1 = ((rand() % 10) + 1);
	int NUM2 = ((rand() % 10) + 1);
	int NUM3 = ((rand() % 10) + 1);

	int one, two, three;

	cout << "Enter three random numbers: " << endl;
	cin >> one >> two >> three;

	if (NUM1 == one && NUM2 == two && NUM3 == three)
	{
		cout << "You won the lottery; first class, one way ticket to a communist country." << endl;
	}
	else
	{
		cout << "You lost the lottery; You can stay in America." << endl;
	}
}