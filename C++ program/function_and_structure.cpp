#include<iostream>
using namespace std;

struct scale
{
    int feet = 0;
    int inch = 0;
};

scale add(scale a, scale b)
{
    scale c;
    c.feet = a.feet + b.feet;
    c.inch = a.inch - b.inch;
    while(c.inch>=12)
    {
        c.feet++;
        c.inch = c.inch - 12;
    }
    return c;
}

main()
{
    scale x,y,z;
    cout<<"Enter the value of feet:"<<endl;
    cin>>x.feet>>y.feet;
    cout<<"Enter the value of inch:"<<endl;
    cin>>x.inch>>y.inch;
    z = add(x,y);
    cout<<z.feet<<" feet\t"<<z.inch<<" inches";
    return 0;
}


/*
----------output----------
Enter the value of feet:
6
7
Enter the value of inch:
4
3
13 feet  1 inches
*/
