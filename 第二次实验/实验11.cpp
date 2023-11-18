#include <iostream>
using namespace std;
unsigned int max(int a, int b)
{
    int c;
    a <= b ? c = b : c = a;
    return c;
}

unsigned int min(int a, int b)
{
    int c;
    a >= b ? c = b : c = a;
    return c;
}

int main()
{   
    unsigned int a, b, c, d, e, f;
    cout << "求两个数的最大公倍数与最小公因数" << "\n" << "请输入两个数" << endl;
    cin >> a >> b;
    for (c = max(a, b);!(c % a == 0 && c % b == 0);c++);
    for (d=min(a,b);!(a%d==0&&b%d==0);d--);
    cout << "最小公倍数为：" << c << endl;
    cout << "最大公因数为：" << d << endl;
}
