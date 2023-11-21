#include <iostream>
#include <stdio.h>
using namespace std;
extern int test8();

int main()
{
	char a;
	int b(0), c(0), d(0), e(0);
	cout << "请输入一串字符：" << endl;
	while ((a = getchar()) != '\n')
	if (a <= 'Z' && a >= 'A' || a <= 'z' && a >= 'a')
		b += 1;
	else if (a <= '9' && a >= '0')
		c += 1;
	else if (a == ' ')
		d += 1;
	else
		e += 1;
	cout << "字母的数量为：" << b << endl;
	cout << "数字的数量为：" << c << endl;
	cout << "空格的数量为：" << d << endl;
	cout << "其他字符的数量为：" << e << endl;

	test8();

	return 0;

}