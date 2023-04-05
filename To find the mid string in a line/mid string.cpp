#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char ch[30],ch1[30];
	int var=0;
	cout<<"Enter the line:";
	gets(ch);
	cout<<"The entered line is:";
	puts(ch);
	cout<<"Enter the mid string:";
	gets(ch1);
	cout<<"The mid string is:";
	puts(ch1);
	int v1=strlen(ch);
	cout<<"v1="<<v1<<"\n";
	int v2=strlen(ch1);
	cout<<"v2="<<v2<<"\n";
	if(v2>v1)
	{
		cout<<"The size of mid string is greater than the size of the line";
		exit(0);
	}
	for(int i=0;i<=v1-v2;i++)
	{
		for(int k=i,j=0;j<v2;k++,j++)
		{
			if(ch[k]!=ch1[j])
			{
				var=0;
				break;
			}
			else
			{
				var=1;
			}
		}
		if(var==1)
		{
			cout<<"The mid string is present\n";
			exit(0);
		}
	}
	cout<<"The mid string is not present\n";
}
