#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void setpoint(int a, int b)
	{
		x += a;
		y += b;
	}
	void display()
	{
		cout << "(" << x << "," << y<<")";
	}
};
int main()
{
	int x, y;
	Point a(60,80);
	cin >> x >> y;
	a.setpoint(x, y);
	a.display();
}