#include<iostream>
using namespace std;
void test(int x)
{
	try
	{
		if(x==1)
			throw x;
		else if(x==0)
			throw 'x';
	}
	catch(char c)
	{
		cout<<"Charecter\n";
	}
	catch(int a)
	{
		cout<<"Interger\n";
	}
}
main()
{
	cout<<"x==1\n";
	test(1);
	cout<<"x==0\n";
	test(0);
}
