#include<iostream>
using namespace std;
int main()
{
    int a,b,c,v,i,cnt=0;
    cin>>v;
    for(i=0 ;i<v ;i++)

    {
        cin>>a>>b>>c;
        if((a==1&&b==1&&c==1)||(a==1&&b==1&&c==0)||(a==1&&b==0&&c==1)||(a==0&&b==1&&c==1))
            cnt++;
    }
    cout<<cnt;

    return 0;
}
