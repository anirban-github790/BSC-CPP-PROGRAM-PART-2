#include<iostream>
using namespace std;
class base
{
	public:
		virtual void area()
		{
			cout<<"Area of the base class\n";
		}
		virtual void peri()
		{
			cout<<"Perimeter of the base class\n";
		}
};
class circle:public base
{
	private:
		float r;
	public:
		void area()
		{
			cout<<"Enter radious:";
			cin>>r;
			cout<<"Area of circle:"<<3.14*r<<"\n";
		}
		void peri()
		{
			cout<<"Enter radious:";
			cin>>r;
			cout<<"perimeter of circle:"<<2*3.14*r<<"\n";
		}
};
class squre:public base
{
	private:
		int a;
	public:
		void area()
		{
			cout<<"Enter side:";
			cin>>a;
			cout<<"Area of squre:"<<a*a<<"\n";
		}
		void peri()
		{
			cout<<"Enter side:";
			cin>>a;
			cout<<"perimeter of squre:"<<2*a<<"\n";
		}
};
class rectriangle:public base
{
	private:
		int l,b;
	public:
		void area()
		{
			cout<<"Enter length:";
			cin>>l;
			cout<<"Enter breagth:";
			cin>>b;
			cout<<"Area of rectriangle:"<<l*b<<"\n";
		}
		void peri()
		{
			cout<<"Enter length:";
			cin>>l;
			cout<<"Enter breagth:";
			cin>>b;
			cout<<"perimeter of rectriangle:"<<l+b<<"\n";
		}
};
main()
{
	base *ptr[3];
	circle cir;
	rectriangle rec;
	squre squ;
	ptr[0]=&cir;
	ptr[1]=&squ;
	ptr[2]=&rec;
	for(int i=0;i<3;i++)
	{
		ptr[i]->area();
		ptr[i]->peri();
	}
}
