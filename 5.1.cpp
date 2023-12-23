#include<iostream>
using namespace std;


class Time             // 定义Time类
{
    private:              // (1)将数据成员改为私有的
	int hour;
	int minute;
	int sec;

    public:               
		void putin()           //定义成员函数
		{
			cin >> hour;
			cin >> minute;
			cin >> sec;
		}
		void putout()     
		{
			cout << hour << ":" << minute << ":" << sec;
		}

};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.putin();        //成员函数输入
	t1.putout();       //成员函数输出
	
	return 0;
}
