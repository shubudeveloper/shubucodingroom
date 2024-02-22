#include<iostream>
using namespace std;
int sum(int array[],int n1);

int main()
{
    int n,num[50],result;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the "<<n<<" elements in array"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    result = sum(num,n);
    cout<<"The sum of array is "<<result<<endl;
}

int sum(int array[],int n1)
{
    int add = 0;
    {
        for(int i=0;i<n1;i++)
        {
            add = add + array[i];
        }
        return add;
    }
}


/*
----------output----------
Enter the size of array
10
Enter the 10 elements in array
1
2
3
4
5
6
7
8
9
0
The sum of array is 45
*/
