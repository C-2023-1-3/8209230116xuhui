#include<iostream>
using namespace std;

int test4()
{
	int a, b;
	char x;
	cout << "������һ������ʽ" << endl;
	cin >> a >> x >> b;
	switch (x)
	{
	case '+':cout << "a+b=" << (a + b) << endl;
		break;
	case '-':cout << "a-b=" << (a - b) << endl;
		break;
	case '*':cout << "a*b=" << (a * b) << endl;
		break;
	case '/':
	{
		if (b == 0)
			cout << "��ʽ������" << endl;
		else
			cout << "a/b=" << (a / b) << endl;
	}
	    break;
	default:cout << "������Ƿ�" << endl;

		return 0;

	}
}