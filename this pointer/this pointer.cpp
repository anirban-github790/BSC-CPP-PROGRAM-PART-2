#include<iostream>
using namespace std;
class showthis
{
	private:
		int data;
	public:
		void show()
		{
			cout<<this<<"\n";
		}
};
main()
{
	showthis w1,w2,w3;
	cout<<"address of w1=";
	w1.show();
	cout<<"address of w2=";
	w2.show();
	cout<<"address of w3=";
	w3.show();
}
