

#include<iostream>
using namespace std;

void merge(const int list1[], int size1,const int list2[], int size2)
{
	cout << "The merged list is ";
	int size;
	size=size1 + size2;
	for (int m(0), n(0),a(0); m < size1 && n < size2;a++)
	{
		if (list1[m] > list2[n])
		{
			if (n != size2 - 1)
			{
			cout <<list2[n]<<" ";
			n++;
			}
			else
			{
				cout << list2[n] << " ";
				for (;m<size1;m++)
				{
					cout << list1[m] << " ";
				}
				return;
			}
		}
		else
		{
			if (m != size1-1)
			{
			cout << list1[m]<<" ";
			m++;
			}
			else
			{
				cout << list1[m] << " ";

				for (;n<size2;n++)
				{
					cout << list2[n]<<" ";
				}
				return;
			}
		}
	}
}
int main()
{
	int a, b;
	int x[80];
	int y[80];
	cout << "enter list1:";
	cin >> a;
	for (int n(0); n < a; n++)
	{
		cin >> x[n];
	}
	cout << "enter list2:";
	cin >> b;
	for (int n(0); n < b; n++)
	{
		cin >> y[n];
	}
	merge(x,a,y,b);
	return 0;
}
