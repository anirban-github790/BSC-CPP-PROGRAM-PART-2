#include<iostream>
using namespace std;
class a
{
	private:
		int a;
	protected:
		int b;
		void input()
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
		}
		void output()
		{
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
		}
		int call_a()
		{
			return a;
		}
};
class c:private a
{
	private:
		int x;
	public:
		void sum()
		{
			input();
			x=call_a()+b;
		}
		void show_sum()
		{
			cout<<"x="<<x<<"\n";
			cout<<"a="<<call_a()<<"\n";
			cout<<"b="<<b<<"\n";
		}
		void put()
		{
			input();
			output();
		}
};
main()
{
	c ob;
	a a1;
//	a1.input();//This is error as protected
	ob.sum();
	ob.show_sum();
	ob.put();
}
