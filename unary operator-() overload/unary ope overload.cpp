#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b,c;
	public:
		sample(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void show()
		{
			cout<<"a="<<a<<",b="<<b<<",c="<<c<<"\n";
		}
		void operator-();
};
void sample::operator-()
{
	a=-a;
	b=-b;
	c=-c;
}
int main()
{
	sample s1(10,15,-20),s2(-1,-2,3);
	s1.show();
	-s1;
	s1.show();
	s2.show();
	-s2;
	s2.show();
}
