#include <iostream>
using namespace std;
int main()
{
	const float c=3.14;
	float a, b,v; 
	cout << "求圆锥的体积（圆周率取3.14）" << endl;
	cout << "请输入圆锥的半径:";
	cin >> a;
		cout <<"\n" << "请输入圆锥的高:";
		cin >> b;
		v = a * a * b*c/3;
		cout << "\n" << "您所输入的圆锥体积为:" << v<<endl;
		return 0;
}
