#include<iostream>
using namespace std;
class linked
{
	private:
		struct node
		{
			int info;
			node *next;
		};
		node *start;
	public:
		linked()
		{
			start=NULL;
		}
		node *create_node()
		{
			int var;
			node *p=new node;
			cout<<"Enter the integer:";
			cin>>var;
			p->info=var;
			p->next=NULL;
			return p;
		}
		void insert_begin();
		void insert_last();
		void insert_after();
		void delete_particular();
		void display();
		void reverse_traversal();
		void sort();
		void search();
};
void linked::insert_begin()		//Insert at the beginning
{
	node *p;
	p=create_node();
	if(start==NULL)
		start=p;
	else
	{
		p->next=start;
		start=p;
	}
}
void linked::insert_last()		//Insert at the last
{
	node *p=start;
	p=create_node();
	if(start==NULL)
		start=p;
	else
	{
		node *q=start;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
	}
}
void linked::insert_after()		//Insert after the node
{
	node *p=start;
	p=create_node();
	int key;
	cout<<"Enter the node info after which the node will insert:";
	cin>>key;
	if(start==NULL)
		start=p;
	else
	{
		node *q=start;
		while(q->next!=NULL && q->info!=key)
		{
			q=q->next;
		}
		if(q->next==NULL)
			p->next=p;
		else
		{
			p->next=q->next;
			q->next=p;
		}
	}
}
void linked::reverse_traversal()		//reverse traversal
{
	node *p,*q,*r;
	if(start==NULL)
	{
		cout<<"The list is emplty\n";
		exit(0);
	}
	else
	{
		p=start;
		q=p->next;
		p->next=NULL;
		while(q!=NULL)
		{
			r=q->next;
			q->next=p;
    		p=q;
    		q=r;
		}
		start=p;
		p=start;
		while(p!=NULL)
    	{
    	    cout<<p->info<<"->";
			p=p->next;  
		}
		}
	}
void linked::sort()		//Sort the list
{
	node *p=start;
	node *q;
	int temp,count=0;
	if(start==NULL)
	{
		cout<<"The list is empty\n";
		exit(0);
	}
	else
	{
		while(p!=NULL)
		{
			count++;
			p=p->next;
		}
		p=start;
		while(count>0)
		{
			p=start;
			while(p!=NULL)
			{
				q=p->next;
				if(p->info > q->info)
				{
					temp=p->info;
					p->info=q->info;
					q->info=temp;
				}
				count--;
			}
		}
		cout<<"Sorting is completed\n";
	}
}
void linked::display()		//Display the node
{
	cout<<"The linked list is:";
	node *p=start;
	while(p!=NULL)
	{
		cout<<p->info<<"->";
		p=p->next;
	}
	cout<<"\n";
}
void linked::search()				//Search a node
{
	node *p=start;
	int key;
	cout<<"Which node will search:";
	cin>>key;
	while(p->next!=NULL&&p->info!=key)
	{
		p=p->next;
	}
	if(p->info==key)
		cout<<"The is found\n";
	else
		cout<<"The is not found\n";
}
void linked::delete_particular()				//Delete particular
{
	node *p=start;
	node *q;
	int key;
	cout<<"Which node will delete:";
	cin>>key;
	if(p->info==key)
	{
		cout<<"The deleted node is:"<<p->info<<"\n";
		start=start->next;
		delete p;
	}
	while(p->info!=key && p->next!=NULL)
	{
		q=p;
		p=p->next;
	}
	if(p->next==NULL)
	{
		cout<<"The deleted node is:"<<p->info<<"\n";
		q->next=NULL;
	}
	else
	{
		cout<<"The deleted node is:"<<p->info<<"\n";
		q->next=p->next;
		delete p;
		
	}
}
int main()
{
	linked l1;
	int n;
	do
	{
		cout<<"\n1.Insert begin\n2.Insert last\n3.Insert after\n4.Delete particular\n";
		cout<<"5.Display\n6.Reverse traversal\n7.Sort\n8.Search\n";
		cout<<"Enter the choice:";
		cin>>n;
		switch(n)
		{
			case 1:
				l1.insert_begin();
				break;
			case 2:
				l1.insert_last();
				break;
			case 3:
				l1.insert_after();
				break;
			case 4:
				l1.delete_particular();
				break;
			case 5:
				l1.display();
				break;
			case 6:
				l1.reverse_traversal();
				break;
			case 7:
				l1.sort();
				break;
			case 8:
				l1.search();
				break;
			case 9:
				l1.search();
				break;
			default:
				cout<<"Exit\n";
				exit(0);
		}
		cout<<"\n";
	}while(n!=8);
	return 0;
}
