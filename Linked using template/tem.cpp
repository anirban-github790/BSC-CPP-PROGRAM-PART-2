#include<iostream>
using namespace std;
template<class t>
class list
{
	private:
		class node
		{
			public:
				t info;
				node *next=NULL;
				node *prev=NULL;
		};
		node *start;
	public:
		node *create_node()
		{
			node *p=new node;
			cout<<"Enter the info:";
			cin>>p->info;
			p->next=NULL;
			p->prev=NULL;
			return p;
		}
		list()
		{
			start=NULL;
		}
		void insert_begin()
		{
			node *p=create_node();
			if(start==NULL)
			{
				start=p;
				p->prev=start;
			}
			else
			{
				p->next=start;
				(p->next)->prev=p;
				start=p;
			}
		}
		void display()
		{
			node *p;
			if(start==NULL)
			{
				cout<<"Linked list is empty\n";
				exit;
			}
			else
			{
				p=start;
				while(p!=NULL)
				{
					cout<<p->info<<"->";
					p=p->next;
				}
			}
		}
		void insert_particular()
		{
			int n;
			node *p=create_node();
			if(start==NULL)
			{
				cout<<"The node must insert at the begin";
				start=p;
				p->prev=start;
			}
			else
			{
				node *q=start;
				int count=0;
				while(q!=NULL)
				{
					count++;
					q=q->next;
				}
				cout<<"The number of node:"<<count<<"\n";
				cout<<"Value of position is less than "<<count<<"\n";
				while(n>count)
				{
					cout<<"Enter the position:";
					cin>>n;
				}
				q=start;
				node *r;
				for(int i=1;i<=n;i++)
				{
					r=q;
					q=q->next;
				}
				p->next=q;
				q->prev=p;
				r->next=p;
				p->prev=r;
			}
		}	
};
int main()
{
	int choice;
	list<char> l1;
	do
	{
		cout<<"\n1.Insert at begin\n2.Display\n3.Insert at particular\n4.Exit\n";
		cout<<"Enter the choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				l1.insert_begin();
				break;
			case 2:
				l1.display();
				break;
			case 3:
				l1.insert_particular();
				break;
			default:
				cout<<"Wrong choice\n";
				exit;
		}
	}while(choice!=3);
	return 0;
}
