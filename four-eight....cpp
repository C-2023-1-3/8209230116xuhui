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
	cout << "�����������Ԫ�ظ�����";
	cin >> o;
	int* p = new int[o];
	cout << "������һ�����飺";
	for (int q(0);q < o;q++)
		cin >> p[q];
	cout << "����������Ҫ�۲������Ԫ�أ�";
	cin >> k;
	cout << "��ָ��������ǣ�" << *(p + k - 1) << endl;
	order(p, o);
	for (int h(0);h < o;h++)
		cout << *(p + h) << '\t';
	delete p;
	return 0;

}