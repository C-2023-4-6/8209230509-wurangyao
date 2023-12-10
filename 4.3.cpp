
#include<iostream>
using namespace std;
int main()
{
	bool group[100];
	for (int n(0); n <= 99; n++)
	{
		group[n] = 0;
	}

	for (int n(1); n <= 100; n++)
	{
		for (int m(0); (n-1 + n * m )< 100; m++)
		{
			group[n - 1 + n * m] = (!(group[n - 1 + n * m]));
		}
	}
	for (int n(0); n <= 99; n++) {
		if (group[n] == 1) {
			cout << n+1 <<" ";
		}
	}

}
