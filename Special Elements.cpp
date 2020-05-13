#include<bits/stdc++.h>
typedef long long     ll;
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
    int t;
    cin>>t;
    com(i,t)
    {
        int n,cnt=0;
        cin>>n;
        vector<ll>sums;
        ll x,c[n+1]={0};
        com(i,n)
        {
            cin>>x;
            sums.push_back(x);
            c[x]++;
        }
        for(int i=0; i<n; i++)
        {
            x=sums[i];
            for(int k=i+1; k<n; k++)
            {
                x+=sums[k];
                if(x<=n)
                {
                     cnt+=c[x];
                     c[x]=0;
                }
                else
                    break;
            }
        }
        cout << cnt << endl;
    }
}
