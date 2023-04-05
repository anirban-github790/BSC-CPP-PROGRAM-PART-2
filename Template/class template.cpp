#include<iostream>
using namespace std;
template<class type>
class stack
{
	private:
		type st[10];
		int top;
	public:
		stack()
		{
			top=-1;
		}
		void push(type a)
		{
			if(top>=10)
			{
				cout<<"Overflow\n";
				exit(0);
			}
			else
			{
				st[++top]=a;
			}
		}
		type pop()
		{
			if(top<0)
			{
				cout<<"Underflow\n";
				exit(0);
			}
			else
			{
				return (st[top--]);
			}
		}
};
main()
{
	stack<int> s1;
	s1.push(10);
	s1.push(11);
	s1.push(12);
	cout<<"int pop="<<s1.pop()<<"\n";
	stack<float> s2;
	s2.push(10.45);
	s2.push(11.90);
	s2.push(12.56);
	cout<<"float pop="<<s2.pop()<<"\n";
	cout<<"float pop="<<s2.pop()<<"\n";
	stack<char> s3;
	s3.push('a');
	s3.push('b');
	s3.push('c');
	cout<<"char pop="<<s3.pop()<<"\n";
}
