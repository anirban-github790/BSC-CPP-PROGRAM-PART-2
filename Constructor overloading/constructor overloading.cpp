#include<iostream>
using namespace std;
class counter
{
	private:
		int a;
	public:
		counter()
		{
			a=0;
			cout<<"a="<<a<<"\n";
		}
		counter(int x)
		{
			a=x;
			cout<<"a="<<a<<"\n";
		}
		int operator++()
		{
			++a;
			return a;
		}
};
class counterdn:public counter
{
	private:
		int in;
	public:
		counterdn():
			counter()
		{
			in=0;
			cout<<"in="<<in<<"\n";
		}
		counterdn(int y):
			counter(y)
		{
			in=y;
			cout<<"in="<<in<<"\n";
		}
		counterdn(int y,int h):
			counter(y)
		{
			in=h;
			cout<<"in="<<in<<"\n";
		}
		int operator--()
		{
			--in;
			return in;
		}
};
main()
{
	int var;
	counterdn ob1,ob2(15),ob3(10,20);
	counter c1,c2(5);
	cout<<"--ob1="<<--ob1<<"\n";
	cout<<"--ob2="<<--ob2<<"\n";
	cout<<"--ob3="<<--ob3<<"\n";
	cout<<"++ob1="<<++ob1<<"\n";
	cout<<"++ob2="<<++ob2<<"\n";
	cout<<"++ob3="<<++ob3<<"\n";
	cout<<"++c1="<<++c1<<"\n";
	//cout<<"--c1="<<--c1<<"\n";//Calling a derived class
	cout<<"++c2="<<++c2<<"\n";
}
