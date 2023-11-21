#include<iostream>
using namespace std;

int test8()
{
	double a;
	cout << "请输入a的值：" << endl;
	cin >> a;
	double x1 = a, x2;
	x2 = (x1 + a / x1) / 2;
	if (a >= 0)
	{
		while (fabs(x2 - x1) >= 10e-5)
		{
			x1 = x2;
			x2 = (x1 + a / x1) / 2;
		}
		cout << "所求平方根为：" << x2 << endl;
	}

	else
		cout << "错误" << endl;
	return 0;

}