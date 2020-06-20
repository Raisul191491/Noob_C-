#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
    ll n;
    cin>>n;
    vector<ll>pos(n+1);
    pos[1]=0;
    for(int i=2; i<=n; i++)
        pos[i]=i;
    for(int i=3; i<=n; i++)
    {
        for(int j=i-1; j>1; j--)
        {
            if(i%j==0)
            {
                pos[i]=min(pos[i],pos[j]+(i/j));
            }
        }
    }
    cout<<pos[n];
}
