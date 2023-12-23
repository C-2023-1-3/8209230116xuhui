#include<iostream>
#include<string>
using namespace std;

class student
{
public:
	string id;
	int score;
};

void max(student* a)
{
	student* b;
	student* c;
	int t = a->score;
	for (b = a, c = a;b < a + 5;b++)
	{
		if (t < b->score)
		{
			t = b->score;
			c = b;
		}
	}

	cout << "成绩最高者的学号为" << c->id << endl;
}
int main()
{
	student s[5];
	for (int i(0);i < 5;i++)
		cin >> s[i].id >> s[i].score;
	max(s);
	return 0;
}