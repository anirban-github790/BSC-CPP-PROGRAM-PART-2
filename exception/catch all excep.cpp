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
	catch(...)//These dot must be exactly three ...
	{
		cout<<"Catch all exception\n";
	}
}
main()
{
	cout<<"x==1\n";
	test(1);
	cout<<"x==0\n";
	test(0);
}
