#include<iostream>
using namespace std;
template<class t1=int,class t2=int>//default templatewhich are specified as int
class vector
{
	private:
		t1 a;
		t2 b;
	public:
		vector()
		{
			a=0;
			b=0;
		}
		vector(t1 x,t2 y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"a="<<a<<"\t"<<"b="<<b<<"\n";
		}
};
main()
{
	vector<int,int> ob1(5,10);
	ob1.show();
	vector<int,float> ob2(15,4.9878);
	ob2.show();
	vector<> ob3('a',7.9878);//By default both are treates as a int so char 'a' prints its ascii value and float 7.9878 prints only 7
	ob3.show();
}
