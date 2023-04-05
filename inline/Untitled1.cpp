#include<iostream>
using namespace std;
float inline lbstokg(float lbs)
{
	return(0.45359*lbs);
}
int main()
{
	float pound;
	cout<<"Enter pound:";
	cin>>pound;
	cout<<"The kg:"<<lbstokg(pound)<<"kg";
	return 0;
}
