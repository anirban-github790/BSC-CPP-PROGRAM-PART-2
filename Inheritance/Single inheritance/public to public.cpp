#include<iostream>
using namespace std;
class b
{
	private:
		int a;
	public:
		int b;
		void get()
		{
			a=6;
			b=10;
		}
		int ret()
		{
			return a;
		}
		void show_a()
		{
			cout<<"a="<<a<<"\n";
		}
};
class d:public b
{
	private:
		int c;
	public:
		void sum()
		{
			c=b+ret();
		}
		void show()
		{
			cout<<"a="<<ret()<<"\n";
			cout<<"c="<<c<<"\n";
			cout<<"b="<<b<<"\n";
		}
};
int main()
{
	d ob;
	ob.get();
	ob.show_a();
	ob.sum();
	ob.show();
	ob.b=15;
	ob.show();
}
