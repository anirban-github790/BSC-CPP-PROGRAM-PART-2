#include<iostream>
using namespace std;
class stack
{
	protected:
		int arr[4],top;
	public:
		stack()
		{
			top=-1;
		}
		void push(int var)
		{
			arr[++top]=var;
		}
		void pop()
		{
			cout<<(arr[top--])<<"\n";
		}
};
class stack1:public stack
{
	private:
		int a;
	public:
		stack1():
			stack()
		{
			a=0;
		}
		void push(int var)
		{
			if(top>=4)
			{
				cout<<"Overflow\n";
				exit(1);
			}
			else
			{
				stack::push(var);
			}
		}
		void pop()
		{
			if(top<0)
			{
				cout<<"Underflow\n";
				exit(1);
			}
			else
			{
				stack::pop();
			}
		}
};
main()
{
	stack1 s1;
	s1.push(11);
	s1.push(12);
	s1.push(15);
	s1.pop();
	s1.pop();
	s1.pop();
}
