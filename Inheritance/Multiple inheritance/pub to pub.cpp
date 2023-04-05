#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		int b;
		void input_A()
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
		}
		void output_A()
		{
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
		}
		int call()
		{
			return a;
			output_A();
		}
};
class B
{
	private:
		int c;
	public:
		void input_c()
		{
			cout<<"Enter c:";
			cin>>c;
			cout<<"c="<<c<<"\n";
		}
		int call_c()
		{
			return c;
		}
};
class C:public A,public B
{
	private:
		int d;
	public:
		void mul()
		{
			d=call()*b;
			cout<<"mul="<<d<<"\n";
		}
		void get_d()
		{
			cout<<"Enter d:";
			cin>>d;
			cout<<"d="<<d<<"\n";
		}
		void sum()
		{
			d=call()+b+d;
			cout<<"sum="<<d<<"\n";
			cout<<"a="<<call()<<"\n";
			cout<<"b="<<b<<"\n";
		}
		void sum_c()
		{
			d=d+call_c();
			cout<<"sum_c="<<d<<"\n";
		}
};
main()
{
	C ob1;
	ob1.input_A();
	ob1.output_A();
	ob1.mul();
	ob1.get_d();
	ob1.sum();
	ob1.input_c();
	ob1.sum_c();
}
