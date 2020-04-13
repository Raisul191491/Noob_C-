#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,cnt=0,q,x,y,z;
    cin>>n>>a>>b>>c;
    q=min(a,min(b,c));
    q=n/q;
    for(x=q; x>=0; x--)
    {
        for(y=0;y<=q;y++)
        {
             z=abs((n-(a*x+b*y))/c);
             if(a*x+b*y+c*z==n)
               cnt=max(cnt,x+y+z);
        }
    }
    cout<< cnt <<endl;
}
