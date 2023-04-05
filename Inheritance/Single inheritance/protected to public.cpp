#include<iostream>
using namespace std;
class a
{
	private:
		int a;
	protected:
		int b;
		void get()
		{
			cout<<"Enter a:";
			cin>>a;
		}
		void put()
		{
			cout<<"a="<<a<<"\n";
		}
		int call_a()
		{
			get();
			return a;
		}
};
class c:public a
{
	private:
		int x;
	public:
		void get_b()
		{
			cout<<"Enter b:";
			cin>>b;
		}
		void sum()
		{
			x=call_a()+b;
		}
		void put_sum()
		{
			cout<<"x="<<x<<"\n";
			cout<<"a="<<call_a()<<"\n";
			cout<<"b="<<b<<"\n";
		}
};
main()
{
	c ob;
	a ob1;
	//ob.b=10;//This is error as protected
	ob.get_b();
	ob.sum();
	ob.put_sum();
}
