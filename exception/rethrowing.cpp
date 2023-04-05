#include<iostream>
using namespace std;
void div(int x)
{
	try
	{
		if(x==1)
		{
			throw x;
		}
		else if(x==-1)
		{
			throw 6.8;
		}
		else if(x==0)
		{
			throw 'x';
		}
	}
	catch(int m)
	{
		cout<<"This is integer\n";
	}
	catch(char c)
	{
		cout<<"This is charecter\n";
	}
	catch(double n)
	{
		cout<<"This is double\n";
		throw;//Re throwing from here
	}
}
main()
{
	try
	{
		cout<<"x==1\n";
		div(1);
		cout<<"x==0\n";
		div(0);
		cout<<"x==-1\n";
		div(-1);
	}
	catch(double)
	{
		cout<<"Rethrowing\n";
	}
}
