#include <iostream>
#include <iomanip>
using namespace std;

int work5()
{
	double F, C;
	cout << "请输入华氏温度为：";
	cin >> F;
	F -= 32;
	C = F * 5 / 9;
	cout << "此温度下的摄氏度为：" << fixed << setprecision(2) << C << endl;
	return 0;

}