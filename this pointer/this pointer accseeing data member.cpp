#include<iostream>
using namespace std;
class showthis
{
	private:
		int data;
	public:
		void put(int w)
		{
			this->data=w;
		}
		void show()
		{
			cout<<this<<"\n";
			cout<<"data="<<data<<"\n";
		}
};
main()
{
	showthis w1,w2,w3;
	w1.put(10);
	cout<<"address of w1=";
	w1.show();
	w2.put(20);
	cout<<"address of w2=";
	w2.show();
	w3.put(30);
	cout<<"address of w3=";
	w3.show();
}
