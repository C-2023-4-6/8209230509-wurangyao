

#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int indexOf(const char s1[],const char s2[])

{
	for (int n1(0),n2(0), judge(0); s1[n1]>= 0 && s1[n1]<= 126; n1++)//�ӳ��ַ����ĵ�һ���ַ���ʼʶ��ֱ����������
	{
		if (s1[n1]==s2[0])//����������ַ�����һ���ַ������ַ�����һ���ַ���ͬ
		{
			for (;s2[n2]>41 && s2[n2]<=126&&s2[n2]!='\n';n2++)
				{
					if (s2[n2]==s1[n1+n2])
					{
						judge++;
					}
				}
			if (judge==n2&& judge != 0)
				{
					return n1;
				}
			else
				{

				}
			judge = 0;
			n2 = 0;
		}
	}
	return -1;
}
int main()
{
	char s1[100];
	cout << "Enter the first string:";
	cin.getline(s1,100,'\n');
	char s2[100];
	cout << "Enter the second string:";
	cin.getline(s2,100,'\n');
	cout << "indexOf(��"<< s1 <<"��, ��" << s2 << "��) is " <<indexOf(s2,s1);
	return 0;
}
