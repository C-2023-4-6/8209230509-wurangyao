
#include<iostream>
using namespace std;
int yue(int m, int n)
{
	int x;
	x = (m < n ? m : n);
	for (; !(m % x == 0 && n % x == 0); x--);
	return x;
}
int bei(int &a,int &b)
{
	int y;
	y = (b < a ? a : b);
	for (; !(y % a == 0 && y % b == 0); y++);
	return y;
}
int main()
{
	int m, n;
	int& x(m);
	int& y(n);
	cin >> m >> n;
	cout << yue(m, n) <<"\t"<<bei(x,y) << endl;
}
