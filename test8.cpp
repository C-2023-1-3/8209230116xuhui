#include<iostream>
using namespace std;

int test8()
{
	double a;
	cout << "������a��ֵ��" << endl;
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
		cout << "����ƽ����Ϊ��" << x2 << endl;
	}

	else
		cout << "����" << endl;
	return 0;

}