#include<iostream>
using namespace std;

int test4()
{
	int a, b;
	char x;
	cout << "请输入一个运算式" << endl;
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
			cout << "此式无意义" << endl;
		else
			cout << "a/b=" << (a / b) << endl;
	}
	    break;
	default:cout << "运算符非法" << endl;

		return 0;

	}
}