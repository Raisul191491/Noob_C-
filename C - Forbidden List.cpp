#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
map<ll,ll>mp;
int main()
{
    ll x,n,pos,con=1000,non=1000;
    cin>>x>>n;
    if(n==0)
    {
        cout << x << endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        mp[a]=1;
    }
    for(int i=x; i<=101; i++)
    {
        if(mp[i]==0)
        {
            con=i-x;
            pos=i;
            break;
        }
    }
    for(int i=x-1; i>=0; i--)
    {
        if(mp[i]==0)
        {
            non=x-i;
            if(non<=con)
                pos=i;
            break;
        }
    }
    cout << pos << endl;
}
