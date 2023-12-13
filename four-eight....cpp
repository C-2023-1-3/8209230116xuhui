#include<iostream>
using namespace std;

void order(int a[], int b)
{
	int c;
	for (int i(0);i < b;i++)
	{
		for (int j(0);j < b - 1;j++)
		{
			if (*(a + j) > *(a + j + 1))
			{
				c = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = c;
			}
		}
	}
}
int main()
{
	int o,k;
	cout << "请输入数组的元素个数：";
	cin >> o;
	int* p = new int[o];
	cout << "请输入一组数组：";
	for (int q(0);q < o;q++)
		cin >> p[q];
	cout << "请输入你想要观察的数组元素：";
	cin >> k;
	cout << "其指向的内容是：" << *(p + k - 1) << endl;
	order(p, o);
	for (int h(0);h < o;h++)
		cout << *(p + h) << '\t';
	delete p;
	return 0;

}