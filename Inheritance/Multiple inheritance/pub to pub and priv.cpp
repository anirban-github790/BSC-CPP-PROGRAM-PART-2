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
class C:private A,public B
{
	private:
		int d;
	public:
		void mul()
		{
			input_A();
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
	C ob;
//	ob.input_A();//This is private derived
	ob.input_c();//class B is publicly derived
	ob.get_d();
	ob.sum_c();
	ob.mul();
}
