#include<iostream>
using namespace std;
extern int test7();
extern int test9();

int main()
{
	int a, b, c, d;
	cout << "������������������" << endl;
	cin >> a >> b;
	int m, n;
	m = a;
	n = b;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;

	}

	while ((d = a % b) !=0 )
	{
		a = b;
		b = d;
	}

	cout << "���Լ��Ϊ��" << b << endl;

	int x ;
	x = 1;
	while (x % m != 0 || x % n != 0)
	{
		x += 1;
	}
	
	cout << "��󹫱���Ϊ��" << x << endl;

	test7();
	test9();

	return 0;

}
