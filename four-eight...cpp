#include<iostream>
using namespace std;

int parseHex(const char* const hexString)
{
	int a, b(0);
	a = strlen(hexString);
	int* list = new int[a];
	for (int i(0);i < a;i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
			list[i]= (static_cast<int>(hexString[i]) - 55) * (pow(16, a - 1 - i));
		else
			list[i] = (hexString[i] - 48) * (pow(16, a - i - 1));
		b = b + list[i];
	}
	return b;
}

int main()
{
	char s[999];
	cout << "请输入一个数字：";
	cin.getline(s, 999);
	cout << "其在十进制里的值是：" << parseHex(s) << endl;
	return 0;
}