#include <iostream>
#include <stdio.h>
using namespace std;
extern int test8();

int main()
{
	char a;
	int b(0), c(0), d(0), e(0);
	cout << "������һ���ַ���" << endl;
	while ((a = getchar()) != '\n')
	if (a <= 'Z' && a >= 'A' || a <= 'z' && a >= 'a')
		b += 1;
	else if (a <= '9' && a >= '0')
		c += 1;
	else if (a == ' ')
		d += 1;
	else
		e += 1;
	cout << "��ĸ������Ϊ��" << b << endl;
	cout << "���ֵ�����Ϊ��" << c << endl;
	cout << "�ո������Ϊ��" << d << endl;
	cout << "�����ַ�������Ϊ��" << e << endl;

	test8();

	return 0;

}