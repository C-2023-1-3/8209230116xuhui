#include<iostream>
using namespace std;

class square 
{
    private:
	    int length;
	    int width;
		int height;
		int v;

    public:
		void putin()
		{
			cin >> length;
			cin >> width;
			cin >> height;
		}

		void volume()
		{
			v = length * width * height;
		}

		void putout()
		{
			cout << "长方柱的体积为" << v << endl;
		}
}s1,s2,s3;

int main()
{
	s1.putin();
	s1.volume();
	s1.putout();
	s2.putin();
	s2.volume();
	s2.putout();
	s3.putin();
	s3.volume();
	s3.putout();

	return 0;
}