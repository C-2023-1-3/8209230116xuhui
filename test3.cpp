#include<iostream>
using namespace std;

int test3()
{
	double a, b, c;
	double C;
	cout << "�����������ε����߳�:"<< endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
		if (a == b || b == c || a == c)
	    {
		    C = a + b + c;
		    cout << "��������Ϊ����������" << endl;
		    cout << "�������ε��ܳ�Ϊ��" << C << endl;
	     }
		else
		{
			C = a + b + c;
			cout << "�������β��ǵ���������" << endl;
			cout << "�������ε��ܳ�Ϊ��" << C << endl;
		}

	else
		cout << "����ı߳��޷�����������" << endl;

	return 0;
}