#include<iostream>
using namespace std;
class matrix
{
	private:
		int m[3][3];
	public:
		void getdata()
		{
			cout<<"Enter the data\n";
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cin>>m[i][j];
				}
				cout<<"\n";
			}
		}
		void putdata()
		{
			cout<<"The array is\n";
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<m[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		matrix transport(matrix s1)
		{
		//	s1.putdata();
			matrix s2;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					s2.m[j][i]=s1.m[i][j];
				}
			}
			return s2;
		}
};
int main()
{
	matrix m1,m2;
	m1.getdata();
	m1.putdata();
	m2=m2.transport(m1);
	cout<<"The transport array is\n";
	m2.putdata();
	return 0;
}
