#include<iostream>
using namespace std;
template<class t>
void swap(t *x,t *y)
{
	t temp=*x;
	*x=*y;
	*y=temp;
}
main()
{
	int a,b;
	float p,q;
	cout<<"Enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"Enter p:";
	cin>>p;
	cout<<"enter q:";
	cin>>q;
	swap(&a,&b);
	cout<<"After swapping a and b\n";
	cout<<"a="<<a<<"\t"<<"b="<<b<<"\n";
	cout<<"After swapping p and q\n";
	swap(&p,&q);
	cout<<"p="<<p<<"\t"<<"q="<<q<<"\n";
}
