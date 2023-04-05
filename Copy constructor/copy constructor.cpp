#include<iostream>
using namespace std;
class co
{
	private:
		int a;
	public:
		co()
		{
			a=0;
		}
		co(int x)
		{
			a=x;
		}
		co(co & c)
		{
			a=c.a;
		}
		void show()
		{
			cout<<"a="<<a<<"\n";
		}
};
main()
{
	co s1(10),s2,s6;
	s1.show();
	s2.show();
	co s3(s2);//copy constructor
	s3.show();
	co s4(s1);//copy constructor
	s4.show();
	co s5=s1;//copy constructor
	s5.show();
	s6=s1;//copy constructor is not called here
	s6.show();
}
