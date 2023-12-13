#include<iostream>
using namespace std;


void bubblesort(double list[10])
{
	double a;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				a = list[j];
				list[j] = list[j + 1];
				list[j + 1] = a;
				changed = true;
			}
	}
	 while (changed==true);
	
}

int main()
{
	double list[10];
	cout << "Enter ten numbers:";
	for (int i(0);i < 10;i++)
		cin >> list[i];
	bubblesort(list);
	for (int b(0);b < 10;b++)
			cout << list[b] << " ";
	return 0;
}