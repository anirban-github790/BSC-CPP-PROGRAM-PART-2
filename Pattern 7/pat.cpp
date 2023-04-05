#include<iostream>
using namespace std;
int main()
{
	int n,temp=1,var=3;
	cout<<"Enter the line number:";
	cin>>n;
	for(int line=1;line<=n;line++)
	{
		for(int ch=1;ch<=line;ch++)
		{
			if(ch==1)
			{
				if(ch==line)
				{
					cout<<temp<<"\n";
				}
				else
				{
					cout<<temp<<" ";
					temp=temp+var;
				}
			}
			else if(ch!=line)
			{
				cout<<temp<<" ";
				var=var+2;
				temp=temp+var;
			}
			else
			{
				cout<<temp<<"\n";
			}
		}
		var=3;
		temp=temp+1;
	}
}
