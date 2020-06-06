#include<bits/stdc++.h>
typedef long long     ll;
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
map<ll,ll>mp;
int main()
{
    int n,c=0,g=0,cnt=0;
    cin>>n;
    int a[n];
    com(i,n)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            cnt++;
            c=0,g=0;
        }
        if(a[i]==1)
        {
            if(c)
            {
                cnt++;
                c=0,g=0;
            }
            else
                c=1,g=0;
        }
        if(a[i]==2)
        {
            if(g)
            {
                cnt++;
                c=0,g=0;
            }
            else
                g=1,c=0;
        }
        if(a[i]==3)
        {
            if(g)
            {
                c=1,g=0;
            }
            else if(c)
            {
                c=0,g=1;
            }
        }
    }
    cout << cnt << endl;
}
