#include<iostream>
using namespace std;
int* f()
{
	int* list = new int[4];
	for (int m(0), n(1);m < 4;m++, n++)
		list[m] = n;
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
}
