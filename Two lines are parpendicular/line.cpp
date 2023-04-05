#include<iostream>
using namespace std;
class line
{
	private:
		int x1,y1,x2,y2;
	public:
		void input()
		{
			cout<<"Enter the first co-ordinate:\n";
			cout<<"Enter the value of x1:";
			cin>>x1;
			cout<<"Enter the value of y1:";
			cin>>y1;
			cout<<"Enter the second co-ordinate:\n";
			cout<<"Enter the value of x2:";
			cin>>x2;
			cout<<"Enter the value of y2:"<<"\n";
			cin>>y2;
		}
		void output()
		{
			cout<<"The first co-ordinate is:";
			cout<<"x1="<<x1<<" ";
			cout<<"y1="<<y1;
			cout<<"The second co-ordinate is:";
			cout<<"x2="<<x2<<" ";
			cout<<"y2="<<y2;
		}
		float parpendicular(line l)
		{
			float m1,m2,m;
			m1=(y2-y1)/(x2-x1);
			m2=(l.y2-l.y1)/(l.x2-l.x1);
			m=m1*m2;
			return m;
		}
		void parrallel(line l)
		{
			float m1,m2,m;
			m1=(y2-y1)/(x2-x1);
			m2=(l.y2-l.y1)/(l.x2-l.x1);
			if(m1==m2)
				cout<<"Two lines are parrallel\n";
			else
				cout<<"Two lines are not parrallel\n";
		}
};
int main()
{
	line l1,l2;
	l1.input();
	cout<<"For first line:\n";
	l1.output();
	l2.input();
	cout<<"for second line:\n";
	l2.output();
	float temp=l1.parpendicular(l2);
	if(temp==-1)
		cout<<"Two lines are parpendicular\n";
	else
		cout<<"Two lines are not parpendicular\n";
	l1.parrallel(l2);
	return 0;
}
