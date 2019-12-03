#include <iostream>
using namespace std;


int sumofx(int x);

int main()
{
	int x;
	cout << "Enter a positive integer:";
	cin >> x;
	cout << sumofx(x);
}

int sumofx(int x)
{
	if (x > 1)
	{

		return x + sumofx(x - 1);

	}
	else 
	{
		return 1;
	}
}

