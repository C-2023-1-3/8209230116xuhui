#include<iostream>
using namespace std;
extern int work4();
extern int work5();

int main()
{   
	int k = 1, l = 3;
	int i = k + 1;//����δ����
	cout << i++ << endl;
	int j = 1;//i��ζ���
	cout << j++ << endl;
	cout << "Welcome to C++" << endl;


	work4();
	work5();

	return 0;
}
