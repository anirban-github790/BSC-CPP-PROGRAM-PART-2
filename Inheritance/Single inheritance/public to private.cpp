#include<iostream>
using namespace std;
class a
{
	private:
		int b;
	public:
		int d;
		void input()
		{
			cout<<"Enter b:";
			cin>>b;
			cout<<"Enter d:";
			cin>>d;
		}
		void output()
		{
			cout<<"b="<<b<<"\n";
			cout<<"d="<<d<<"\n";
		}
		int ret()
		{
			return b;
		}
};
class a1:private a
{
	private:
		int x;
	public:
		void sum()
		{
			input();
			x=ret()+d;
		}
		void show_sum()
		{
			cout<<"x="<<x<<"\n";
		}
};
int main()
{
	a ob;
	a1 ob1;
	ob1.sum();
	ob1.show_sum();
	ob.input();
	ob.output();
	ob.d=10;
	ob.output();
	//ob1.input();//This is error
}
