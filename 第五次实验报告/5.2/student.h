class Student              //类声明
{
public:                   //公用成员函数原型声明
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
