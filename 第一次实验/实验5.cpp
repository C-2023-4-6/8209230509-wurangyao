#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	int b;
	cout << "将华氏度转化为摄氏度" << endl;
	cout << "请输入要转化的华氏度";
	cin >> a;
	b = ((a-32)/1.8)*100;
	double c = static_cast<double>(b);
	c = b / 100.00;
	cout << "该华氏度转化为摄氏度后的结果为：" << endl;
	cout << c << endl;
	/*
	*	或者
		b=(a-32)/1.8;
		cout << setprecision(2) << b << endl;
	*/
	return 0;
}
