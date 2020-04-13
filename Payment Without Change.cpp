#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int a,b,n,s,x;
        cin>>a>>b>>n>>s;
        x=s/n;
        if(x<a)
        {
            s-=(x*n);
        }
        else
        {
            s-=(a*n);
        }
        if(s<=b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
