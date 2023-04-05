#include<iostream>
using namespace std;
class alpha
{
	private:
		int data;
	public:
		alpha()
		{
			data=0;
		}
		alpha(int x)
		{
			data=x;
		}
		void operator=(alpha a)
		{
			data=a.data;
		}
		void operator==(alpha a)
		{
			if(data==a.data)
				cout<<"The two objects are same\n";
			else
				cout<<"The two objects are not same\n";
		}
		void show()
		{
			cout<<"data="<<data<<"\n";
		}
};
main()
{
	alpha c1(10),c2(6);
	c1==c2;
	c1=c2;
	c1.show();
	c1==c2;
}
