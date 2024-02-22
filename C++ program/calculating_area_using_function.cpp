#include<iostream>
using namespace std;

int area(int a)
{
    return a*a;
}

int area(int a,int b)
{
    return a*b;
}

float area(int b,float h)
{
    return b*h;
}

void menu(void)
{
    cout<<"1. To calculate the area of square"<<endl;
    cout<<"2. To calculate the area of rectangle"<<endl;
    cout<<"3. To calculate the area of triangle"<<endl;
}

int main()
{
    int opr = 0;
    int x = 0,y = 0;
    float z = 0;
    char ch = 'y';
    while(ch = 'y')
    {
        menu();
        cout<<"Choose Option"<<endl;
        cin>>opr;
        switch(opr)
        {
            case 1:
            
            cout<<"Enter the side of a square:"<<endl;
            cin>>x;
            cout<<"The area of a square is "<<area(x)<<endl;
            break;

            case 2:
            
            cout<<"Enter the length and breadth of a rectangle:"<<endl;
            cin>>x>>y;
            cout<<"The area of a rectangle is "<<area(x,y)<<endl;
            break;

            case 3:
            
            cout<<"Enter the base and height of a triangle:"<<endl;
            cin>>x>>z;
            cout<<"The area of a triangle is "<<area(x,z)<<endl;
            break;

            default:
            cout<<"Invalid Option"<<endl;
            break;
        }
        cout<<"Do you wnt to run again? Press Y"<<endl;
        cin>>ch;
    }
    return 0;
}


/*
----------output----------
1. To calculate the area of square
2. To calculate the area of rectangle
3. To calculate the area of triangle
Choose Option
2
Enter the length and breadth of a rectangle:
14
3
The area of a rectangle is 42
*/