#include<iostream>
using namespace std;
template<class t>
class sample
{
	private:
		t data;
	public:
		sample()
		{
			data=0;
		}
		sample(t x)
		{
			data=x;
		}
		void show();
		void func();
};
template <class t>
void sample<t>::show()
{
	cout<<"data="<<data<<"\n";
}
template <class t>
void sample<t>::func()
{
	cout<<"This is friend template\n";
	cout<<"data="<<data<<"\n";
}
main()
{
	sample<int> s1;
	s1.func();
	sample<float> s2(7.889);
	s2.func();
}
