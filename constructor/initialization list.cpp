#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
	public:
		sample(int x,int y):a(x),b(y)
		{}
		void show();
};
void sample::show()
{
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
}
int main()
{
	sample s1(2,7);
	s1.show();
}
