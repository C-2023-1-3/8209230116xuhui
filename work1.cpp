#include<iostream>
using namespace std;
extern int work4();
extern int work5();

int main()
{   
	int k = 1, l = 3;
	int i = k + 1;//变量未定义
	cout << i++ << endl;
	int j = 1;//i多次定义
	cout << j++ << endl;
	cout << "Welcome to C++" << endl;


	work4();
	work5();

	return 0;
}
