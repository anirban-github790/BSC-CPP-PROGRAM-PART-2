#include<iostream>
using  namespace std;
class a
{
	private:
		int a;
	public:
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
		int call()
		{
			return a;
		}
};
class h:protected a
{
	private:
		int c;
	public:
		void sum()
		{
			input();
			c=call()+b;
		}
		void show()
		{
			cout<<"c="<<c<<"\n";
			cout<<"a="<<call()<<"\n";
			cout<<"b="<<b<<"\n";
		}
};
int main()
{
	a ob1;
	h ob2;
	ob1.input();
	ob1.output();
	ob2.sum();
	ob2.show();
	return 0;
}
