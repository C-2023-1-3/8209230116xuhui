#include<iostream>
using namespace std;
extern int threetwo();

int func1(int a,int b)
{
	int c, d;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	while ((d = a % b) != 0)
	{
		a = b;
		b = d;
	}

    return b;
}

int main(int m, int n)
{   
	int o,p;
	cout << "请输入两个整数："<<endl;
	cin >> m >> n;
	o = func1(m, n);
	p = m * n / o;
	cout << "最大公约数为" << o << endl;
	cout << "最小公倍数为" << p << endl;

	threetwo();
	return 0;
}