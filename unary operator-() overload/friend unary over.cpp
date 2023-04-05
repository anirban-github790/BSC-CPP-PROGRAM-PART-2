#include<iostream>
using namespace std;
class overload
{
	int a,b,c;
	public:
		overload()
		{
			a=0;
			b=0;
			c=0;
		}
		overload(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		friend void operator-(overload & s)//This is must be reference
		{
			s.a=-s.a;
			s.b=-s.b;
			s.c=-s.c;
		}
		void show()
		{
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
			cout<<"c="<<c<<"\n";
		}
};
main()
{
	overload s1(5,-10,15),s2;
	s1.show();
	operator-(s1);
	s1.show();
}
