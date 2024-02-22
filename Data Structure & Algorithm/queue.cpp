#include<iostream>
using namespace std;
#define max 5
int queue[max];
int front = -1;
int rear = -1;
void QInsert(int data)
{
    if(front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear]  = data;
    }
    else if(rear == max)
    {
        cout<<"Queue is fullfilled"<<endl;
    }
    else
    {
        rear++;
        queue[rear]  = data;
    }
}

int Delete()
{
    if(front == -1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Deleted item is "<<"queue[front]"<<endl;
        front++;
    }
    if(front>rear)
    {
        front = rear = -1;
    }
}

void Display()
{
    if(rear = -1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout<<"Choose any one from following:"<<endl;
        cout<<"Press 1 for INSERT the element:"<<endl;
        cout<<"Press 2 for DELETE the element:"<<endl;
        cout<<"Press 3 for VIEW the element:"<<endl;
        cout<<"Press 4 for EXIT the element:"<<endl;

        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter the number for insert in queue:"<<endl;
            int data;
            cin>>data;
            QInsert(data);
            break;

            case 2:
            Delete();
            break;

            case 3:
            Display();
            break;

            case 4:
            cout<<"Exit"<<endl;
            cout<<"Thank You"<<endl;
            break;

            default:
            cout<<"Choose the valid option"<<endl;
        }
    }
    while(choice!=4);
}