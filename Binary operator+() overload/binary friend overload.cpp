#include<iostream>
using namespace std;
class binary
{
	private:
		int a;
		float b;
	public:
		binary()
		{
			a=0;
			b=0.0;
		}
		binary(int x,float y)
		{
			a=x;
			b=y;
		}
		friend binary operator+(binary b1,binary b2)
		{
			binary b;
			b.a=b1.a+b2.a;
			b.b=b1.b+b2.b;
			return b;
		}
		void show()
		{
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
		}
};
main()
{
	binary b3(4,3.5),b4(7,8.9),b5;
	b5=b3+b4;
	b5.show();
	b5=operator+(b3,b4);
	b5.show();
}
