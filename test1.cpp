#include<iostream>
using namespace std;
extern int test2();
extern int test3();
extern int test4();

int main()
{
	char l,i;
	cout << "ÇëÊäÈëÒ»¸ö×ÖÄ¸:" ;
	cin >> l;
	if ( l <= 122 && l >= 97 )
	{
		l -= 32;
		cout << l << endl;

	}
	else
	{
		cout << static_cast<int>(l)<< endl;
	}

	test2();
	test3();
	test4();

	return 0;
}