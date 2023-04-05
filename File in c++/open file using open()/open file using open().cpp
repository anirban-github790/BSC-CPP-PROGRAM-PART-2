#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("country");
	fout<<"united state of india\n";
	fout.close();
	fout.open("capital");
	fout<<"washington\n";
	fout.close();
	int n=80;
	char line[n];
	ifstream inf;
	inf.open("country");
	cout<<"The content of file country\n";
	while(inf)
	{
		inf.getline(line,n);//this is like cin.getline(line,size)
		cout<<line;
	}
	cout<<"\n";
	cout<<"The content of file capital\n";
	inf.close();
	inf.open("capital");
	while(inf)
	{
		inf.getline(line,n);
		cout<<line;
	}
	inf.close();
	return 0;
}
