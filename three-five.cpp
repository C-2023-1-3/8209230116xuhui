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
	cout << "猴子第一天摘了" << func(1) << "个桃子" << endl;
}