#include<iostream>
using namespace std;
template<class T>
T abs(T a)
{
	if(a<0)
		return -a;
	else
		return a;
}
main()
{
	int a=-7;
	cout<<abs(a)<<"\n";
	float b=7.34;
	cout<<abs(b)<<"\n";
}
