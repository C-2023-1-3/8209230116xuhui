#include <iostream>
#include <iomanip>
using namespace std;

int work5()
{
	double F, C;
	cout << "�����뻪���¶�Ϊ��";
	cin >> F;
	F -= 32;
	C = F * 5 / 9;
	cout << "���¶��µ����϶�Ϊ��" << fixed << setprecision(2) << C << endl;
	return 0;

}