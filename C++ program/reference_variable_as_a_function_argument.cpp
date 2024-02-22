#include<iostream>
using namespace std;
void swapv(int a,int b);
void swapr(int &a,int &b);
void swapp(int *a,int *b);

int main()
{
    int packet1 = 300;
    int packet2 = 350;
    cout<<"The value of Packet 1 is "<<packet1<<endl;
    cout<<"The value of Packet 2 is "<<packet2<<endl;

    swapv(packet1,packet2);
    cout<<"The value of Packet 1 is "<<packet1<<endl;
    cout<<"The value of Packet 2 is "<<packet2<<endl;

    swapr(packet1,packet2);
    cout<<"The value of Packet 1 is "<<packet1<<endl;
    cout<<"The value of Packet 2 is "<<packet2<<endl;

    swapp(&packet1,&packet2);
    cout<<"The value of Packet 1 is "<<packet1<<endl;
    cout<<"The value of Packet 2 is "<<packet2<<endl;
}

void swapv(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapr(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapp(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


/*
----------output----------
The value of Packet 1 is 300
The value of Packet 2 is 350
The value of Packet 1 is 300
The value of Packet 2 is 350
The value of Packet 1 is 350
The value of Packet 2 is 300
The value of Packet 1 is 300
The value of Packet 2 is 350
*/