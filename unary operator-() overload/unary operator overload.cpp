#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
	public:
		sample()
		{
			a=0;
			b=0;
		}
		sample(int x,int y)
		{
			a=x;
			b=y;
		}
		sample unary_minus(sample);
		void show()
		{
			cout<<"a="<<a<<"\n";
			cout<<"b="<<b<<"\n";
		}
};
sample sample::unary_minus(sample s)
{
	sample p;
	p.a=-s.a;
	p.b=-s.b;
	return p;
}
int main()
{
	sample s1(10,-20),s2;
	s1.show();
	s2=s2.unary_minus(s1);
	cout<<"After the unary operator - overload\n";
	s2.show();
}
