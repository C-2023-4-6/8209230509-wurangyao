
#include<iostream>
using namespace std;
int main()
{
	double temp;
	int x;
	cout << "请输入数组的元素个数：";
	cin >> x;
	double* group = new double[x];
	cout << "请输入数组的元素：";
	for (int y(0); y < x; y++)
	{
		cin >> group[y];
	}
	
	for (int n(0); n < x-1; n++)
	{
		for (int m(n + 1); m < x; m++)
		{
			if (group[m] < group[n])
			{
				temp = group[n];
				group[n] = group[m];
				group[m] = temp;
			}
		}
	}
	for (int n(0); n < x; n++)
	{
		cout << *(group+n) << " ";
	}
	delete []group;
}
