#include<iostream>
using namespace std;
class gamma
{
	private:
		int data;
	public:
		gamma()
		{
			data=0;
		}
		gamma(int x)
		{
			data=x;
		}
		gamma(gamma & refer)
		{
			data=refer.data;
		}
		void operator=(gamma &a)
		{
			data=a.data;
		}
		void show()
		{
			cout<<data<<endl;
		}
};
main()
{
	gamma a(99);
	gamma b(a);
	gamma c;
	c=a;
	a.show();
	b.show();
	c.show();
}
