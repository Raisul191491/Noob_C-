#include<bits/stdc++.h>
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    int n,v;
    cin>>n>>v;
    vector<int>low;
    com(i,n)
    {
        int k,x,mx=10000000;
        cin>>k;
        com(j,k)
        {
            cin>>x;
            mx=min(mx,x);
        }
        if(mx<v)
        {
            low.push_back(i+1);
        }
    }
    cout << low.size() << endl;
    com(i,low.size())
    {
         cout << low[i] << " ";
    }
}
