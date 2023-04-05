#include<iostream>
using namespace std;
class base
{
	public:
		virtual ~base()
		{
			cout<<"The base is destroyed\n";
		}
};
class derive:public base
{
	public:
		~derive()
		{
			cout<<"The derive is destroyed\n";
		}
};
main()
{
	base *ptr;
	derive d;
	ptr=&d;
}
