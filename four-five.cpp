#include<iostream>
using namespace std;

int indexOf(char* s1, char* s2);

int main()
{
	char s1[999], s2[999];
	cout << "Enter the first string:";
	cin.getline(s1, 999);
	cout << "Enter the second string:";
	cin.getline(s2, 999);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is " << indexOf(s1, s2) << endl;


	return 0;


}


int indexOf(char* s1, char* s2)
{
	int a, b, index, i, j;
	a = strlen(s1);
	b = strlen(s2);
	bool* s3 = new bool[a];
	for (int n(0);n < a;n++)
		s3[n] = false;
	for (int m(0);m < b - a + 1;m++)
	{
		for (i = 0, j = m;(i < a) && (j < m + a);i++, j++)
			if (s1[i] == s2[j])
			{
				index = m;
				s3[i] = true;
			}
		    int h(0);
			for (int k(0); k < a; k++)
			{
				if (s3[k] == false && m == b - a)
				{
					return -1;
					break;
				}
				if (s3[k] == true)
					h++;
			}
			      if (h == a)
			      {
				      return index;
			      }
		  
	}
}

