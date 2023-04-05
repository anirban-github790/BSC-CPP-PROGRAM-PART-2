#include<iostream>
using namespace std;
class counter
{
	public:
		int a;
};
int main()
{
	counter p;
	cout<<"Enter a:";
	cin>>p.a;
	cout<<"The value of a is:"<<p.a;
	return 0;
}
