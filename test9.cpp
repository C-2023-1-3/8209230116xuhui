#include<iostream>
using namespace std;

int test9()
{
	int i, m(1), sum(0);
	for (i = 2;i <= 100;i *= 2, m += 1)
		sum += i;
	double n;
	n = sum * 0.8 / m;
	cout << "每天平均花费：" << n << endl;

	return 0;

}
