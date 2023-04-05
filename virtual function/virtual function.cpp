#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show()
		{
			cout<<"This is in base\n";
		}
};
class derive1:public base
{
	public:
		void show()
		{
			cout<<"This is in derive1\n";
		}
};
class derive2:public base
{
	public:
		void show()
		{
			cout<<"This is in derive2\n";
		}
};
main()
{
	base *ptr;
	derive1 d1;
	derive2 d2;
	ptr=&d1;
	ptr->show();
	ptr=&d2;
	ptr->show();
	base s;
	s.show();
}
