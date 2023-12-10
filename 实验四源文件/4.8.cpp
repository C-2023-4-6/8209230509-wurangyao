

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	int result (0),size(0);
	for (;48<=hexString[size]&&hexString[size]<=102;)
	{size++;}
	int* g = new int[size];
	for (int n(0); n < size; n++)
	{
		g[n] = hexString[n];
		if (97 <= g[n] && g[n] <= 102)
		{
			g[n] = (g[n] - 87)*pow(16,size-n-1);
		}
		if (65 <= g[n] && g[n] <= 70)
		{
			g[n] = (g[n] - 55) * pow(16, size - n-1);
		}if (49 <= g[n] && g[n] <= 57)
		{
			g[n] = (g[n] - 48) * pow(16, size - n-1);
		}
		result += g[n];
	}
	return result;
}
int main()
{
	char s[100];
	cin.getline(s, 100, '\n');
	cout << parseHex(s);
}

