#include<iostream>
using namespace std;
class base
{
	private:
		int a;
	public:
		base()
		{
			a=0;
		}
		base(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<"a="<<a<<"\n";
		}
};
class derv1:virtual public base
{
	private:
		int b;
	public:
		derv1()
		{
			b=0;
		}
		derv1(int y)
		{
			b=y;
		}
		void display()
		{
			cout<<"b="<<b<<"\n";
		}
};
class derv2:virtual public base
{
	private:
		int c;
	public:
		derv2()
		{
			c=0;
		}
		derv2(int z)
		{
			c=z;
		}
		void display()
		{
			cout<<"c="<<c<<"\n";
		}
};
class derive:public derv1,public derv2
{
	public:
		derive(int x,int y,int z):
			base(x),derv1(y),derv2(z)
			{}
		void display()
		{
			cout<<"This is a derive class\n";
			cout<<"This is under derive class\n";
			base::display();
			derv1::display();
			derv2::display();
		}
};
int main()
{
	base b;
	derv1 d1;
	derv2 d2;
	b.display();
	d1.display();
	d2.display();
	derive d(5,10,15);
	d.display();
	return 0;
}
