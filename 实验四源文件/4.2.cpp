
#include<iostream>
using namespace std;
void operation(double group[])
{
	double temp;
	for (int n(0); n < 9; n++)
	{
		for (int m(n + 1); m < 10; m++)
		{
			if (group[m] > group[n])
			{
				temp = group[n];
				group[n] = group[m];
				group[m] = temp;
			}
		}
	}
	for (int n(0); n < 10; n++)
	{
		cout << group[n] << " ";
	}
}
int main()
{
	double group[10];
	for (int n(0); n < 10; n++)
	{
		cin >> group[n];
	}
		operation(group);
}



