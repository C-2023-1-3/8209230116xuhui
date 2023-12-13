#include<iostream>
#include"mytemperature.h"
using namespace std;

int threethree()
{
	cout << "Celsius" << "\t" << "Fahrenheit" << endl;
	double a = 31;
	double b;
	for (;a <= 40;)
		b = celsius_to_fah(a);
	cout << a << "\t" << b << endl;

	cout << "Fahrenheit" << "\t" << "Celsius" << endl;
	double c = 30;
	double d;
	for (;c <= 120;)
		d = fahrenheit_to_cels(c);
	cout << c << "\t" << d << endl;

	return 0;

}