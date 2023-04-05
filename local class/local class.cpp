#include<iostream>
using namespace std;
class m
{
	private:
		int a;
	public:
		void localclass()
		{
			class local//This is a local class
			{
				int b;
				public:
					void getdata()
					{
						cout<<"Enter b as a local class:";
						cin>>b;
					}
					void putdata()
					{
						cout<<"The value of b as a local class is:"<<b<<"\n";
					}
			};
			local c2;
			c2.getdata();
			c2.putdata();
		}
		void get()
		{
			cout<<"Enter a:";
			cin>>a;
		}
		void put()
		{
			cout<<"The value of a is:"<<a<<"\n";
		}
};
main()
{
	m c1;
	c1.get();
	c1.put();
	c1.localclass();
}
