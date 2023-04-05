#include<iostream>
using namespace std;
class unary
{
	private:
		int a;
		float b;
	public:
		unary()
		{
			a=0;
			b=0.0;
		}
		unary(int x,float y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"a="<<a<<"\n";
			cout<<"f="<<b<<"\n";
		}
		unary operator-(unary u)
		{
			unary t;
			t.a=a-u.a;
			t.b=b-u.b;
			return t;
		}
};
int main()
{
	unary u1(10,7.5),u2(9,8.3),u3;
	u3=u1-u2;
	u3.show();
	
}
