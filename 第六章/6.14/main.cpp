#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	float a = 17.8836;


	float b = 17.8836;
	b = round(b * 1000) / 1000;
	cout << b << endl;

	float c = 17.8836;
	c = floor(c * 1000 + 0.5) / 1000;
	cout << c << endl;

	float d = 17.8831;
	d = floor(d * 1000 + 0.5) / 1000;
	cout << d << endl;


	return 1;
}
