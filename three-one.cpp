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
	cout << "����������������"<<endl;
	cin >> m >> n;
	o = func1(m, n);
	p = m * n / o;
	cout << "���Լ��Ϊ" << o << endl;
	cout << "��С������Ϊ" << p << endl;

	threetwo();
	return 0;
}