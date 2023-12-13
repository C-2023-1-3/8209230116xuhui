#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int d;
	for (int a(0);a < size1;a++)
		list3[a] = list1[a];
	for (int b(0);b < size2;b++)
		list3[size1+b] = list2[b];
	for (int i(0);i < (size1 + size2)-1;i++)
	{
		for (int c(0);c < (size1 + size2)-1;c++)
			if (list3[c] > list3[c + 1])
			{
				d = list3[c];
				list3[c] = list3[c + 1];
				list3[c + 1] = d;
			}
	
	}	
	cout << "The merged list is ";
	for (int e(0);e < (size1 + size2); e++)
			cout << list3[e] << " ";
}

int main()
{
	int size1, size2, size3;
	cout << "Enter list1:";
	cin >> size1;
	int* list1 = new int[size1];
	for (int f(0);f < size1;f++)
		cin >> list1[f];
	cout << "Enter list2:";
	cin >> size2;
	int* list2 = new int[size2];
	for (int g(0);g < size2;g++)
		cin >> list2[g];
	size3 = size1 + size2;
	int* list3 = new int[size3];
	merge(list1, size1, list2, size2, list3);
	
	return 0;

}
