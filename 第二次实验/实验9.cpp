#include <iostream>
using namespace std;
int main()
{	
	bool i(0);
	int a, c, r(0);
	char b;
	cout << "请输入你要计算的表达式" << endl;
	cin >> a >> b >> c;
	if (b == '+')r = a + c;
	if (b == '-')r = a - c;
	if (b == '*')r = a * c;
	if (b == '/')
	{
		if (c == 0)
		{
			i+=1;
		}
		else
		{
		r = a / c;
		}
	}
	if (b == '%')
	{
		if(c==0)
		{
			i += 1;
		}
		else
		{
			r = a % c;
		}
	}
	if (i == true)
	cout << "除数不能为0" << endl;
	else
	cout << "计算的结果为:" << r << endl;
	return 0;
}
