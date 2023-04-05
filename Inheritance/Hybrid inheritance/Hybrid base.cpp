#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		void get_a(int x)
		{
			a=x;
		}
		void show_a()
		{
			cout<<"a="<<a<<"\n";
		}
};
class B:public A
{
	private:
		int b;
	public:
		void get_b(int y)
		{
			b=y;
		}
		void show_b()
		{
			cout<<"b="<<b<<"\n";
		}
};
class C:public A
{
	private:
		int c;
	public:
		void get_c(int z)
		{
			get_a(8);
			show_a();
			c=z;
		}
		void show_c()
		{
			cout<<"c="<<c<<"\n";
		}
};
class D:public B,public C
{
	private:
		int d;
	public:
		void get_d(int l)
		{
			d=l;
		}
		void show_d()
		{
			cout<<"d="<<d<<"\n";
		}
};
main()
{
	D ob;
	ob.get_d(4);
	ob.show_d();
	ob.get_b(5);
	ob.show_b();
	ob.get_c(10);
	ob.show_c();
//	ob.get_a(15);//This is ambiguous
//	ob.show_a();//This is also ambiguous
}
