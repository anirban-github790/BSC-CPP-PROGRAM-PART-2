#include<iostream>
using namespace std;
class stack
{
	private:
		int st[4];
		int top;
	public:
		class range
		{
		};
		stack()
		{
			top=-1;
		}
		void push(int var)
		{
			if(top>=4)
			{
				throw range;
			}
			else
				st[++top]=var;
		}
		int pop()
		{
			if(top<0)
			{
				throw range;
			}
			else
				return st[top--];
		}
};
main()
{
	stack s1;
	try
	{
		s1.push(11);
		s1.push(22);
		s1.push(33);
		s1.push(44);
		s1.push(55);
		cout<<s1.pop()<<"\n";
		cout<<s1.pop()<<"\n";
	}
	catch(stack::range)
	{
		cout<<"Overflow or Underflow\n";
	}
}
