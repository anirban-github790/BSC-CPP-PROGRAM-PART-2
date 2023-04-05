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
		friend sample operator+(sample s,int x)
		{
			sample s1;
			s1.feet=s.feet+x;
			s1.inch=s.inch+x;
			return s1;
		}
		friend sample operator+(int x,sample s)
		{
			sample s1;
			s1.feet=s.feet+x;
			s1.inch=s.inch+x;
			return s1;
		}
};
main()
{
	sample s2,s3(6,9.4),s4;
	cout<<"The format is operator+(sample s,int x)\n";//Both are correct in case of friend function
	cout<<"This is no argunent constructor\n";
	s4=operator+(s2,8);
	s4.show();
	cout<<"This is argunent constructor\n";
	s4=operator+(s3,8);
	s4.show();
	cout<<"The format is operator+(int x,sample s)\n";
	cout<<"This is no argunent constructor\n";
	s4=operator+(8,s2);
	s4.show();
	cout<<"This is argunent constructor\n";
	s4=operator+(8,s3);
	s4.show();
}
