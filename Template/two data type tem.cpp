#include<iostream>
using namespace std;
template<class t1,class t2>
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
	vector<int,float> ob2(15,4.9878);
	ob1.show();
	ob2.show();
}
