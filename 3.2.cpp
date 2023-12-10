
#include<iostream>
using namespace std;
bool is_prime(int num)
{
	bool result(true);
	for (int n(2); n <= num / 2; n++)
	{
		if (num % n == 0) {
			result = false;
		}
	}
	return result;
}
int main(){
	int n(2), m(0);
	for (; n <= 200; n++)
	{
		if (is_prime(n) == 1)
		{
			cout <<n<<"\t";
			m +=1;
		}
		if (m==10)
		{
			m = 0;
			cout << endl;
		}
	}
}
