
#include<iostream>
using namespace std;
int operation(int peach, int day)
{
	int initial;
	if (day != 0)
	{
		peach = (peach + 1) * 2;
		operation(peach, day - 1);
	}
	else
	{
		return peach;
	}
}
int main()
{
	int peach(1), day(10);
	cout << operation(peach, day);
}

