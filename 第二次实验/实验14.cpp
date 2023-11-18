#include <iostream>
using namespace std;
int main()
{
	float a=2, b=0, c,i,x,y,z;
	for (i = 1;a+b<= 100;i++) {
		b = b+a;
		a = 2* a;
		x = 0.8* b/i;
	}
	cout << "每天平均花费：" << x << "元" << endl;
	return 0;
}
