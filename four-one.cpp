#include<iostream>
using namespace std;

int main()
{
	int a[10];
	cout << "Enter ten numbers:";
	for (int b(0); b < 10;b++)
		cin >> a[b];
	cout << "The distinct numbers are :";
	cout << a[0] << " ";
	for (int c(1);c < 10;c++)
	{
		for (int d(0);d < c;d++)
		{
			if (a[c] != a[d])
			{
				if (d == c - 1)
					cout << a[c] << " ";
				else
					continue;
			}
			else
				break;
		}
	}


	return 0;
}
