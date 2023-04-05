#include<iostream>
using namespace std;
class abc
{
	private:
		int a,b,s;
	public:
		abc()
		{
			a=0;
			b=0;
			s=0;
		}
		abc(int x,int y)
		{
			a=x;
			b=y;
		}
		void input()
		{
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
		}
		void sum()
		{
			s=a+b;
			cout<<"The sum is="<<s<<"\n";
		}
		void sub()
		{
			s=a-b;
			cout<<"The sub is="<<s<<"\n";
		}
};
int main()
{
	abc c1,c2(5,7),c3;
	c1.sum();
	c1.sub();
	c2.sum();
	c2.sub();
	c3.input();
	c3.sum();
	c3.sub();
	c2.input();
	c2.sum();
	c2.sub();
	return 0;
}
