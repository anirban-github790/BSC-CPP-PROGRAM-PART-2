#include<iostream>
using namespace std;
class abc
{
	private:
		int a;
	public:
		void geta()
		{
			cout<<"Enter a:";
			cin>>a;
		}
		void disp()
		{
			cout<<"Value of a:"<<a;
		}
};
int main()
{
	abc x;
	x.geta();
	x.disp();
	return 0;
}

