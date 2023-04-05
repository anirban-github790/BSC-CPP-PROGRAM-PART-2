#include<iostream>
using namespace std;
class sample
{
	private:
		int feet;
		float inch;
	public:
		sample(){}
		sample(int i,float f)
		{
			feet=i;
			inch=f;
		}
		void show()
		{
			cout<<"feet="<<feet<<"\n";
			cout<<"inch="<<inch<<"\n";
		}
		sample operator+(int x)
		{
			sample s;
			s.feet=feet+x;
			s.inch=inch+x;
			return s;
		}
};
main()
{
	sample s1,s2(5,6.8),s3;
	s3=s1+4;//Here s1 calling the function operator+(int x),so the left hand side that is s1 must be a object
//	s3=4+s1;//This will error because left hand side 4 is not a object it is a operand
	s3.show();
	s3=s2+4;
	s3.show();
}
