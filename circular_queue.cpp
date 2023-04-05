#include<iostream>
#define max 50
using namespace std;

class circular_queue
{
        int q[max];
        int REAR,FRONT,next,Qsize;

	public :

	    circular_queue()
	    {
	        REAR=FRONT=Qsize=0;
	    }

	    void queue_size()
	    {
            cout << "Enter the maximum size of the queue you want : ";
            cin >> Qsize;
	    }

		void enqueue()
		{
			if(FRONT==0)
			{
				FRONT=REAR=1;
				cout << "Enter an element : ";
				cin >> q[REAR];
			}
			else
			{
				next=(REAR%Qsize)+1;
				if(next!=FRONT)
				{
					REAR=next;
					cout << "Enter an element : ";
					cin >> q[REAR];
				}
				else
					cout << "Queue is full !" << endl;
			}
			char ch=choice();
			if(ch=='y' || ch=='Y')
				enqueue();
		}

		void dequeue()
		{
			if(FRONT==0)
				cout << "The quque is empty !" << endl;
			else
			{
				cout << "Dequeued element : " << q[FRONT] << endl;
				q[FRONT]='\0';
				(FRONT==REAR) ? FRONT=REAR=0 : FRONT=(FRONT%Qsize)+1;
			}
            char ch=choice();
			if(ch=='y' || ch=='Y')
				dequeue();
		}

		void display()
		{
			if(REAR==0 && FRONT==0)
				cout << "Queue is empty !" << endl;
			else
			{
				cout << "Elements in the queue : " << endl;
				for(int index=1;index<=Qsize;index++)
				{
					cout << " " << q[index] << " |";
				}
				cout << endl;
			}
		}

		char choice()
		{
		    char ch;
		    cout << "Do you want to continue ? (y/n)";
		    cin >> ch;
		    return ch;
		}
};

int main()
{
    circular_queue q;
    int choice;
    enum cq{null,enqueue,dequeue,display,exit};

    cout << "::::::::::::::::::::::::::::: OPERATIONS ON QUEUE :::::::::::::::::::::::::::::" << endl;
    q.queue_size();
    do
    {
        cout << "1)Enqueue\n2)Dequeue\n3)Display\n4)Exit\nEnter your choice : ";
        cin >> choice;
        switch(choice)
        {
            case enqueue:
                q.enqueue();
                break;

            case dequeue:
                q.dequeue();
                break;

            case display:
                q.display();

            case exit:
                break;

            default : cout << "Enter a value between 1 and 4." << endl;
        }
    }while(choice!=exit);

    return 0;
}
