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
#define pi            3.14159265358979323846264338327950
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        map<ll,ll>mp;
        int n,x,cnt=0;
        cin>>n;
        com(i,n)
        {
            cin>>x;
            if(x%2==0)
            {
                while(x%2==0)
                {
                    if(mp[x])
                        break;
                    mp[x]=1;
                    x/=2;
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}

