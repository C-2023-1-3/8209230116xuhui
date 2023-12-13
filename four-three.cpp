#include<iostream>
using namespace std;

int main()
{
	bool list[100];
	for (int i(0);i < 100;i++)
		list[i] = false;
	for (int a(0);a < 100;a++)
	{
		for (int b(a);b < 100;b += a + 1)
		{
			if (list[b] == true)
				list[b] = false;
			else
				list[b] = true;
		}
	}
	for (int c(0);c < 100;c++)
	{
		if (list[c] == true)
			cout << c + 1 << " ";
	}
	return 0;
}