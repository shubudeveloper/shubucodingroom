#include<iostream>
using namespace std;

int binary_search(int a[],int low,int high,int search)
{
    int mid,flag;
    flag = 0;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(search>a[mid])
        {
            low = mid + 1;
        }
        else if(search<a[mid])
        {
            high = mid - 1;
        }
        else if(search==a[mid])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    cout<<"Searched element is "<<search<<" found at location "<<mid+1<<endl;
    else
    cout<<"Element is not found"<<endl;
}

int main()
{
    int n,i,search,low,high,a[10];
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" element in an array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be search:"<<endl;
    cin>>search;
    binary_search(a,0,n-1,search);
}


/*
----------output----------
Enter the size of array:
10
Enter 10 element in an array:
1
2
3
4
5
6
7
8
9
10
Enter the element to be search:
6
Searched element is 6 found at location 6
*/