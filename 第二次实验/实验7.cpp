#include <iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "输入x来计算分段函数" << endl;
	cin >> x;
	if (0 < x && x < 10)
	{
		if (0 < x && x < 1)
		{
			y = 3 - 2 * x;
		}
		else
		{
			if (1 <= x && x < 5)
			{
				y = 1 / (2 * x) + 1;
			}
			else
			{
				if (5 <= x && x < 10)
				{
					y = x * x;
				}
			}
		}
	cout << y;
	}
	else
	{
		cout << "你输入的x超出了定义域" << endl;
	}
	return 0;
}

