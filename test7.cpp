#include<iostream>
#include<iomanip>
using namespace std;

int test7()
{
	for (int i = 2;i <= 6;i += 1)
		cout << setfill('*') << setw(i) << ' '<< endl;

	return 0;
}