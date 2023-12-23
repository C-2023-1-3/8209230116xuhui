#include<iostream>
using namespace std;

class point
{
private:
	int x ;
	int y ;

public:
	point(int a,int b)
	{
		x = a;
		y = b;
	}

	void setpoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}

	void display()
	{
		cout << "修改后的坐标值为：( " << x << " , " << y << " )";
	}
};

int main()
{
	int n, m;
	cin >> n >> m;
	point p(60, 80);
	p.setpoint(n, m);
	p.display();
	return 0;
}