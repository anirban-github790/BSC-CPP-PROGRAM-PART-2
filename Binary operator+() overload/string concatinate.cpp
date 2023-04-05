#include<iostream>
#include<cstring>
using namespace std;
class stringh
{
	private:
		char ch[30];
	public:
		void input()
		{
			cout<<"Enter the string:";
			gets(ch);
		}
		void output()
		{
			cout<<"The string is:"<<ch<<"\n";
		}
		stringh operator+(stringh s)
		{
			stringh s1;
			strcpy(s1.ch,ch);
		//	strcpy(s1.ch," ");
			strcat(s1.ch,s.ch);
			return s1;
		}
};
main()
{
	stringh s2,s3,s4;
	cout<<"Enter the 1st string:\n";
	s2.input();
	cout<<"Enter the 2nd string:\n";
	s3.input();
	cout<<"The output is\n";
	s2.output();
	s3.output();
	s4=s2.operator+(s3);
	s4.output();
}
