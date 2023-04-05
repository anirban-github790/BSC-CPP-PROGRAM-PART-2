#include<iostream>
using namespace std;
class sample
{
	public:
		virtual void display()
		{
			cout<<"Base";
		}
};
class sample1
{
	public:
		void display()
		{
			sample::display();
		}
};
int main()
{
	sample1 s;
	s.display();
}
