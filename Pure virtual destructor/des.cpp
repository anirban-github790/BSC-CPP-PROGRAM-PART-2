#include<iostream>
using namespace std;
class base
{
	public:
		virtual ~base()=0;		//Pure virtual function
};
base ::~base()		//Defination of the pure virtual function
{
	cout<<"Base is destroyed\n";
}
class derived:public base
{
	public:
		~derived()
		{
			cout<<"Derived is destroyed\n";
		}
};
int main()
{
//	base b1;		//This will error
	base *b=new derived;
	delete b;
	return 0;
}
