class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int a, const char b[], char c) {
		num = a;
		sex = c;
		for (int n(0); n < 20; n++)
		{
			name[n] = b[n];
		}
	};
private:
	int num;
	char name[20];
	char sex;
};
