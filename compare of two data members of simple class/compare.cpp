#include<iostream>
using namespace std;
class simple
{
	private:
		int a,b;
	public:
		void get_data()
		{
			cout<<"Enter value of a:";
			cin>>a;
			cout<<"Enter value of b:";
			cin>>b;
	   }
	   void put_data()
	   {
	   		cout<<"Value of a is:"<<a<<"\n";
	   		cout<<"Value of b is:"<<b<<"\n";
	   }
	   void compare()
	   {
	   		if(a>b)
	   			cout<<"a is greater than b\n";
	   		else
	   			cout<<"b is greater than a\n";	
	   }
};
int main()
{
	simple s;
	s.get_data();
	s.put_data();
	s.compare();
	return 0;
}
