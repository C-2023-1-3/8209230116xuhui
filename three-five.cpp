#include<iostream>
using namespace std;

int func(int n) 
{
	if (n == 10)
		return 1;
	else
		return 2 * (func(n + 1) + 1);
}

int main()
{
	cout << "���ӵ�һ��ժ��" << func(1) << "������" << endl;
}