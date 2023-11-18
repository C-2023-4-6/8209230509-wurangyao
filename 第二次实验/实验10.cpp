#include <iostream>
using namespace std;

int main()
{
	char ch[11];
	int g[11];
	int a(0), b(0), c(0), d(0), i(0);
	cout << "计算长度为10的字符串的各种字符的个数" << endl;
	cin.getline(ch, 11, '\n');
	for (;i <= 10;i++)
	{
		g[i] = ch[i] - '0';
		g[i] += 48;
		if (48 <= g[i] && g[i] <= 57)//数字
			a++;
		if ((65 <= g[i] && g[i] <= 90) || (97 <= g[i] && g[i] <= 122))//字母
			b++;
		if ((33 <= g[i] && g[i] <= 47) || (58 <= g[i] && g[i] <= 64) || (91 <= g[i] && g[i] <= 96) || (123 <= g[i] && g[i] <= 126))//特殊字符
			c++;
		if (0 == g[i] || g[i] == 32)//空格
			d++;
	}
	d -= 1;
	cout << "数字的个数为：" << a << endl;
	cout << "字母的个数为：" << b << endl;
	cout << "特殊字符的个数为：" << c << endl;
	cout << "空格的个数为：" << d << endl;
	return 0;
}