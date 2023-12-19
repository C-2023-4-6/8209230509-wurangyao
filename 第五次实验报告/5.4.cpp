#include<iostream>
using namespace std;
class student {
private:
	int score, ID;
public:
	void setvalue(int a, int b)
	{
		score = a;
		ID = b;
	}
	int s()
	{
		return score;
	}
	int I()
	{
		return ID;
	}
};
int max(student* p[])
{
	int temp(0), result;
	for (int n(0); n < 5; n++)
	{
		if (p[n]->s() > temp)
		{
			temp = p[n]->s();
			result = p[n]->I();
		}
	}
	return result;
}
int main() {
	int va[5][2];
	student* p[5];
	student g[5];
	for (int n(0); n < 5; n++)
	{
		p[n] = &g[n];
		cin >> va[n][0] >> va[n][1];
		g[n].setvalue(va[n][0], va[n][1]);
	}
	cout << max(p);
}