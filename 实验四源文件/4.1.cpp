
#include<iostream>
using namespace std;
int main()
{
int num(0);
	int temp, judge(0);
	int group[10];
	cout << "enter ten numbers:";
	for (int n(0),x(0); n < 10; n++) {
		cin >> temp;
		for (int m(0); m < 10; m++)
		{
			if (temp == group[m]) {
				judge = 1;
				num += 1;
			}
		}
		if (judge == 0) {
			group[x] = temp;
			x++;
		}
		judge = 0;
	}
	cout << "The distinct numbers are: ";
	for (int n(0); n < (10-num); n++)
		cout << group[n] << " ";
}


