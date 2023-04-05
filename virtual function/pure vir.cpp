#include<iostream>
using namespace std;
class sample
{
	public:
		virtual void display()=0;
		void show()
		{
			cout<<"It is sample\n";
		}
};
class derv1:public sample
{
	public:
		void display()
		{
			cout<<"It is derv1\n";
		}	
};
class derv2:public sample
{
	public:
		void display()
		{
			cout<<"It is derv2\n";
		}	
};
main()
{
	sample *ptr;
	ptr->show();
	derv1 d1;
	derv2 d2;
	ptr=&d1;
	ptr->display();
	ptr=&d2;
	ptr->display();
}
