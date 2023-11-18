#include <iostream>
using namespace std;

int main()
{
	int k(0);
		int i = k + 1;//"k"没有定义
		cout << i++ << endl;
		i = 1;//"i"反复定义
		cout << i++ << endl;
		cout << "welcome to C++"<<endl;
		return 0;
}
