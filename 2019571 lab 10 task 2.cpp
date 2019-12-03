

#include <iostream>
#include <math.h>
using namespace std;


int exp();


int main()
{
	int b;
	int e;
	cout << "Enter base:";
	cin >> b;
	cout << "Enter exponent:";
	cin >> e;
	
	cout << exp(b);

	

	

}

int exp(int b,int e)
{
	if(b<=1)
	return b*b;
	else
	{
		return b * exp(b);
	}
}
