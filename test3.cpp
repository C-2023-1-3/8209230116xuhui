#include<iostream>
using namespace std;

int test3()
{
	double a, b, c;
	double C;
	cout << "请输入三角形的三边长:"<< endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
		if (a == b || b == c || a == c)
	    {
		    C = a + b + c;
		    cout << "此三角形为等腰三角形" << endl;
		    cout << "该三角形的周长为：" << C << endl;
	     }
		else
		{
			C = a + b + c;
			cout << "此三角形不是等腰三角形" << endl;
			cout << "该三角形的周长为：" << C << endl;
		}

	else
		cout << "输入的边长无法构成三角形" << endl;

	return 0;
}