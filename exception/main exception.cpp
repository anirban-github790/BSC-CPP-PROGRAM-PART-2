#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout<<"Enter x:";
	cin>>x;
	cout<<"Enter y:";
	cin>>y;
	try
	{
		if(x-y==0)
			throw(x-y);
		else
		{
			cout<<"x="<<x<<"\n";
			cout<<"y="<<y<<"\n";
		}
	}
	catch(int a)
	{
		cout<<"x-y="<<a<<"\n";
		cout<<"This is exception\n";
	}
}
