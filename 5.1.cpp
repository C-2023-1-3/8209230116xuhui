#include<iostream>
using namespace std;


class Time             // ����Time��
{
    private:              // (1)�����ݳ�Ա��Ϊ˽�е�
	int hour;
	int minute;
	int sec;

    public:               
		void putin()           //�����Ա����
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
	Time t1;           //����t1ΪTime�����
	t1.putin();        //��Ա��������
	t1.putout();       //��Ա�������
	
	return 0;
}
