#include<iostream>
using namespace std;


void count(const char s[], int counts[])
{
	for (int m(0);m < 26;m++)
		counts[m] = 0;
	for (int n(0);n < 999;n++)
	{
		counts[s[n] - 'a']++;
		counts[s[n] - 'A']++;
	}
	for (int i(0);i < 26;i++)
	{
		if (counts[i] != 0)
		{
			cout << static_cast<char>(i + 'a') << " : " << counts[i] << " times " << endl;
		}

	}

}

int main()
{
	char s[999];
	int counts[26];
	cout << "Enter a string:";
	cin.getline(s, 999);
	count(s, counts);
	return 0;
}