
#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int n(0),temp; n < 100; n++)
	{
		temp = s[n];
		for (int m(0);m < 26;m++) 
		{
			if (temp == 65 + m || temp == m + 97)
			{
				counts[m]++;
			}
		}
	}
}
int main()
{
	char s[100];
	int counts[26];
	char letter[26];
	for (int n(0),m(0); n < 26; n++)
	{
		m = 97 + n;
		letter[n] = m;
	}
	for (int n(0); n < 26; n++)
	{
		counts[n] = 0;
	}
	cin.getline(s, 101, '\n');
	count(s, counts);
	for (int n(0); n < 26;n++)
	{
		if (counts[n] > 0)
			cout << letter[n] << ":" << counts[n] << "times " << endl;
	}


	return 0;
}






