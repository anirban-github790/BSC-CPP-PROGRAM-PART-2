#include<iostream>
#include<math.h>
using namespace std;
float area(float a,float b);
int area(int a);
float area(float a,float b,float c);
float area(float a);
int main()
{
	int a,var;
	float temp,x,y,z,r;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter x:";
	cin>>x;
	cout<<"Enter y:";
	cin>>y;
	cout<<"Enter z:";
	cin>>z;
	cout<<"Enter r";
	cin>>r;
	temp=area(x,y);
	cout<<"area of rectriangle:"<<temp<<"\n";
	var=area(a);
	cout<<"area of squre:"<<var<<"\n";
	temp=area(r);
	cout<<"area of circle:"<<temp<<"\n";
	temp=area(x,y,z);
	cout<<"area of triangle:"<<temp<<"\n";
	return 0;
}
float area(float a,float b)
{
	return(a*b);
}
int area(int a)
{
	return(a*a);
}
float area(float a,float b,float c)
{
	float s,r;
	s=(a+b+c)/2;
	r=sqrt(s*(s-a)*(s-b)*(s-c));
	return r;
}
float area(float a)
{
	return(3.14*a*a);
}
