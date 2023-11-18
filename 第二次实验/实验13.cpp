#include <iostream>
#include <math.h>
using namespace std;
float adroid(float a,float c)
{
    float b;
    b = (a + c / a) / 2;
    return b;
}
int main()
{
    float a;
    cout << "请输入一个数字来计算他的平方根:" << endl;
    cin >> a;
    if(a<0)
    {
        cout << "负数没有平方根" << endl;
    }
    else
    {
        if (a == 0)
        {
        }
        else
        {
            for (float b = a;abs(adroid(a, b) - a) >= 1e-5;)a = adroid(a, b);
            //可以为比1e-5更小的数，这样会提高精度，但是意义不大，因为能输出的结果位数有限。
        }
        cout << "此数的平方根为：" << a << endl;
    }
    return 0;
}
