#include<iostream>
#include<cmath>
using namespace std;

int threetwo()
{
	bool is_prime(int num);
	int m;
	bool n;
	cout << "请输入一个整数:" << endl;
	cin >> m;
	n = is_prime(m);
	cout << n << endl;

	int a = 2;
	int count = 0;
	while (count < 200) 
	{
		if (is_prime(a)) 
		{

			cout << a << "  ";
			count++;
			if (count % 10 == 0)
			{
				cout << endl;
			}
		}
		a++;
	}
	return 0;
}

bool is_prime(int num)
{
	int i(2);
	for (;i < num;)
	{
		if (num % i != 0)

			if (i = (num - 1))
				return true;
			else
				i += 1;
		else
			return false;

	}
	
}
