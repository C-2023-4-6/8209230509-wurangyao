#include <iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	cout << "请输入三角形的三条边长" << endl;
	cin >> a >> b >> c;
	if(a + b > c && a + c > b && b + c > a )
	{
		d = a + b + c;
		cout << "三角形的周长为周长为：" << d << endl;
	a == b || b == c || a == c ? cout<<"你输入的三角形为等腰三角形" :
		cout << "你输入的三角形不是等腰三角形";
	 }
	else { cout << "你输入的三边不能构成三角形" << endl; }
	return 0;
}
