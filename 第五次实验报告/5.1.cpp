#include<iostream>
using namespace std;
class Time             // ����Time��
{
	private:              // ���ݳ�ԱΪ˽�е�
		int hour;
		int minute;
		int sec;
	public:
		void settime(int h,int m,int s) {
			hour = h;
			minute = m;
			sec = s;
		}
		void showtime() {
			cout <<hour << ":" << minute << ":" << sec << endl;
		}
};
int main()
{
	int h, m, s;
	cin >> h >> m >> s;
	Time t1;           //����t1ΪTime�����
	t1.settime(h, m, s);
	t1.showtime();
	return 0;
}