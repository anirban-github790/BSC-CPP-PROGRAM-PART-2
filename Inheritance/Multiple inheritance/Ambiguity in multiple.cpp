#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"This is class A\n";
		}		
};
class B
{
	public:
		void display()
		{
			cout<<"This is class B\n";
		}
};
class C:public A,public B
{
	public:
		void display()
		{
			cout<<"This is class C\n";
			A::display();
			B::display();
		}
};
main()
{
	C ob;
	ob.display();
	ob.A::display();
	ob.B::display();
}
