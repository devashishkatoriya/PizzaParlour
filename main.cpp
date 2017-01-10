// Assignment No. : 10 - DSA				Roll No. : 31		Date :
/*
	Pizza Parlour accepting Maximum M orders. Orders are served in First come
	First Serve basis. Order once placed cannot be cancelled. Write a C++
	Program to Simulate the system using circular queue using array.
*/

#include <iostream>
#include <string.h>

using namespace std;

#define MAX 4

char cArray[MAX][20];
int front,rear;

void insert()									//Insert Function
{
    char value[20];
    cout<<"\nEnter order : ";
    cin>>value;
    if((front == 0 && rear == MAX) || (front == rear+1))
    {
        cout<<"\nThe queue is already full!";
        return;
    }
    else
    {
        strcpy(cArray[rear],value);
        if(rear==MAX-1)
            rear = 0;
        else
            rear = rear + 1;
    }
}

void pop()												//Delete Function
{
    if(front==rear)
    {
        cout<<"\nThe queue is Empty!";
    }
    else
    {
        cout<<"\nPopped out :- "<<cArray[front];
        front++;
    }
}

void display()											//Display Function
{
    int i;
    cout<<"\n";
    if(front<rear)
    {
        for(i=front;i<rear;i++)
        {
            cout<<"\t"<<cArray[i];
        }
    }
    else
    {
        for(i=front;i<MAX;i++)
        {
            cout<<"\t"<<cArray[i];
        }
        for(i=0;i<rear;i++)
        {
            cout<<"\t"<<cArray[i];
        }
    }
    cout<<"\t-:- "<<cArray[front];
}

int main()												//main()
{
    
    int ch;
    
    cout<<"\nProgram to Simulate working of Pizza Delivery System.";
    do
    {
        ch = 0;
        cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\n 1 to Enter order.";
        cout<<"\n 2 to Display orders.";
        cout<<"\n 3 to Check-out.";
        cout<<"\n 0 to Exit.";
        cout<<"\n\nEnter your choice : ";
        cin>>ch;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~\n\n";
        switch(ch)
        {
            case 1 : insert();
                break;
            case 2 : cout<<"\nThe Orders are :- \n";
                display();
                break;
            case 3 : pop();
                break;
            case 0 : break;
            default : cout<<"\nInvalid option!";
        }
    }while(ch!=0);
    
    cout<<"\nThank you for using this program :D \n\n";
    return 0;
}

/* OUTPUT

Program to Simulate working of Pizza Delivery System.

~~~~~~~~~~~~~~~~~~~~~~
 1 to Enter order.
 2 to Display orders.
 3 to Check-out.
 0 to Exit.

Enter your choice : 1
~~~~~~~~~~~~~~~~~~~~~~

Enter order : Pizza

~~~~~~~~~~~~~~~~~~~~~~
 1 to Enter order.
 2 to Display orders.
 3 to Check-out.
 0 to Exit.

Enter your choice : 1
~~~~~~~~~~~~~~~~~~~~~~

Enter order : Pepper

~~~~~~~~~~~~~~~~~~~~~~
 1 to Enter order.
 2 to Display orders.
 3 to Check-out.
 0 to Exit.

Enter your choice : 2
~~~~~~~~~~~~~~~~~~~~~~

The Orders are :- 

	Pizza	Pepper	-:- Pizza

~~~~~~~~~~~~~~~~~~~~~~
 1 to Enter order.
 2 to Display orders.
 3 to Check-out.
 0 to Exit.

Enter your choice : 3
~~~~~~~~~~~~~~~~~~~~~~

Popped out :- Pizza

~~~~~~~~~~~~~~~~~~~~~~
 1 to Enter order.
 2 to Display orders.
 3 to Check-out.
 0 to Exit.

Enter your choice : 1
~~~~~~~~~~~~~~~~~~~~~~

Enter order : Pepperoni

~~~~~~~~~~~~~~~~~~~~~~
 1 to Enter order.
 2 to Display orders.
 3 to Check-out.
 0 to Exit.

Enter your choice : 2
~~~~~~~~~~~~~~~~~~~~~~

The Orders are :- 

	Pepper	Pepperoni	-:- Pepper

~~~~~~~~~~~~~~~~~~~~~~
 1 to Enter order.
 2 to Display orders.
 3 to Check-out.
 0 to Exit.

Enter your choice : 0
~~~~~~~~~~~~~~~~~~~~~~

Thank you for using this program :D 

*/
