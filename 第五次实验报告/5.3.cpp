#include<iostream>
using namespace std;
class column
{
public:
	void setvalue(int a,int b,int c) {
		length = a;
		weight = b;
		height = c;
	}
	int oper() {
		int result;
		result = length * height * weight;
		return result;
	}
private:
	int length, height, weight;
};
int main()
{
	column c1, c2, c3;
	int g[3][3];
	for (int n(0); n < 3; n++)
	{
		for (int m(0); m < 3; m++)
		{
			cin >> g[n][m];
		}
	}
	c1.setvalue(g[0][0], g[0][1], g[0][2]);
	c2.setvalue(g[1][0], g[1][1], g[1][2]);
	c3.setvalue(g[2][0], g[2][1], g[2][2]);
	cout << c1.oper() << "\t" << c2.oper() << "\t" << c3.oper() << endl;
}