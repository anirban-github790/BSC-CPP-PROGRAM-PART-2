#include<iostream>
using namespace std;
class a1
{
	private:
		int a;
	public:
		int b;
		void getdata()
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
		}
		void putdata()
		{
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
		}
		int call_a()
		{
			return a;
		}
};
class a2:public a1
{
	private:
		int c;
	public:
		void show()
		{
			getdata();
			putdata();
		}
		void sum()
		{
			c=call_a()+b;
		}
		void show_sum()
		{
			cout<<"sum="<<c<<"\n";
		}
};
class a3:public a2
{
	private:
		int d;
	public:
		void get_d()
		{
			cout<<"Enter d:";
			cin>>d;
		}
		void mul()
		{
			d=d*call_a()*b;
		}
		void show_mul()
		{
			cout<<"mul="<<d<<"\n";
			cout<<"a="<<call_a()<<"\n";
			cout<<"b="<<b<<"\n";
		}
};
main()
{
	a3 ob1;
	ob1.getdata();
	ob1.putdata();
	ob1.show();
	ob1.sum();
	ob1.show_sum();
	a1 ob2;
//	ob2.get_d();//Base class call derived class that is impossible
	ob1.get_d();
	ob1.mul();
	ob1.show_mul();
}
