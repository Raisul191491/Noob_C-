#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
ll mp[100005]={0};
int main()
{
    ll n,sum=0,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
        sum+=x;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        mp[y]+=mp[x];
        sum-=(mp[x]*x);
        sum+=(mp[x]*y);
        mp[x]=0;
        cout << sum << endl;
    }
}
