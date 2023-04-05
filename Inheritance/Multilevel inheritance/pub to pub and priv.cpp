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
			cout<<"a="<<call_a()<<"\n";
			cout<<"b="<<b<<"\n";
		}
};
class a3:private a2 //In class a3 the member functions of both class a1 and a2 are private
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
		void call_a1_getdata()
		{
			getdata();
			putdata();
		}
		void call_a2_sum()
		{
			sum();
			show_sum();
		}
};
main()
{
	a3 ob1;
	ob1.call_a1_getdata();
	ob1.get_d();
	ob1.mul();
	ob1.show_mul();
	ob1.call_a2_sum();
}
