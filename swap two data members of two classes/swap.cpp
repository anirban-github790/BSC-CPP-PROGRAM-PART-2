#include<iostream>
using namespace std;
class sample2;
class sample1
{
	private:
		int a;
	public:
		void getdata(int x)
		{
			a=x;
		}
		void putdata()
		{
			cout<<"The value of a:"<<a<<"\n";
		}
		friend void exchange(sample1 &,sample2 &);
};
class sample2
{
	private:
		int b;
	public:
		void getdata(int y)
		{
			b=y;
		}
		void putdata()
		{
			cout<<"The value of b:"<<b<<"\n";
		}
		friend void exchange(sample1 &,sample2 &);
};
void exchange(sample1 & s1,sample2 & s2)
{
	int var;
	var=s1.a;
	s1.a=s2.b;
	s2.b=var;
}
int main()
{
	sample1 s1;
	sample2 s2;
	s1.getdata(6);
	s2.getdata(7);
	cout<<"The value before swapping"<<"\n";
	s1.putdata();
	s2.putdata();
	exchange(s1,s2);
	cout<<"The value after swapping"<<"\n";
	s1.putdata();
	s2.putdata();
}
