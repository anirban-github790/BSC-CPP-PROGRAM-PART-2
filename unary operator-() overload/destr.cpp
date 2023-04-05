#include<iostream>
using namespace std;
class integer
{
	private:
		int a;
	public:
		integer()
		{
			a=0;
			cout<<"a="<<a<<endl;
		}
		~integer()
		{
			cout<<"The object is destroyed\n";
		}
		integer(int x)
		{
			a=x;
			cout<<"a="<<a<<endl;
		}
		friend void operator++(integer i)
		{
			++i.a;
			cout<<"++i="<<i.a<<"\n";
		}
};
int main()
{
	integer i1,i2(6);
	operator++(i1);
	operator++(i2);
}
