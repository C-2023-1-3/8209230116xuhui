#include<iostream>
using namespace std;

int test2()
{
	double x, y;
	int i(0);
	while (i <= 3)
	{
		cout << "ÇëÊäÈëxµÄÖµ£º";
		cin >> x;
		if (x > 0 && x < 5)
			if (x < 1)
				y = 3 - 2 * x;
			else
				y = 2 / (4 * x) + 1;
		else
		{
			if (x >= 5 && x < 10)
				y = x * x;
		}

		cout << "y=" << y << endl;

		i += 1;
	}

	return 0;

}