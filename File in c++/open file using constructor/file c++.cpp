#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out("item");//out is a output stream and out is not a keyword
	char name[30];
	float cost;
	cout<<"Enter the item name:";
	cin>>name;
	out<<name<<"\n";
	cout<<"Enter the item cost:";
	cin>>cost;
	out<<cost<<"\n";
	cout<<"Enter again name and cost\n";
	cout<<"Enter the item name:";
	cin>>name;
	cout<<"Enter the item cost:";
	cin>>cost;
	out.close();
	ifstream in("item");//in is a input stream and in is not a keyword
	in>>name;
	in>>cost;
	cout<<"item name="<<name<<"\n";
	cout<<"item cost="<<cost<<"\n";
	in.close();
	return 0;
}
