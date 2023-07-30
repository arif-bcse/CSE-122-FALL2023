#include<iostream>
using namespace std ;
int main()
{
    int x,y,z;

    cin>>x>>y>>z;
    if (x>y && z<x)
    {
        cout<<"The  large number "<< x;
    }
    else if (x<y && y>z)
    {
        cout<<"The large  number "<< y;
    }
    else
        cout<<"the large  number "<< z;
    return 0;
}
