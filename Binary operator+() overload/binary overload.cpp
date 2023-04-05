#include<iostream>
using namespace std;
class dis
{
	private:
		int feet;
		float inch;
	public:
		dis()
		{
			feet=0;
			inch=0.0;
		}
		dis(int f,float i)
		{
			feet=f;
			inch=i;
		}
		void getdata()
		{
			cout<<"Enter feet=";
			cin>>feet;
			cout<<"Enter inch=";
			cin>>inch;
		}
		void putdata()
		{
			cout<<"The feet is="<<feet<<"\n";
			cout<<"The inch is="<<inch<<"\n";
		}
		dis operator+(dis d)
		{
			dis t;
			t.feet=feet+d.feet;
			t.inch=inch+d.inch;
			if(t.inch>=12)
			{
				t.feet++;
				t.inch-=12.00;
			}
			return t;
		}
};
int main()
{
	dis d1(5,8.5),d2(7,6.5),d3;
	d1.putdata();
	d2.putdata();
	//d3=d1.add(d2);
	d3=d1+d2;
	d3.putdata();
	return 0;
}
