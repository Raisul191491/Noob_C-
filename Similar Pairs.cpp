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
    int t;
    cin>>t;
    com(i,t)
    {
        int n,odd=0,eve=0,flag=0;
        cin>>n;
        int a[n],cnt=0;
        com(i,n)
        {
            cin>>a[i];
            if(a[i]%2==0)
               eve++;
            else
               odd++;
        }
        sortI(a,n);
        if(odd%2==0 && eve%2==0)
          cout << "YES\n";
        else
        {
             com(i,n-1)
             {
                  if(a[i]+1==a[i+1])
                  {
                       flag=1;
                       break;
                  }
             }
             if(flag)
               cout << "YES\n";
             else
               cout << "NO\n";
        }
    }
}
