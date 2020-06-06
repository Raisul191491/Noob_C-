#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,64)
     for(int i=0;i<t;i++)
     {
          ll n,ans=0,x=0;
          cin>>n;
          ans+=n;
          for(ll i=2;i<=n;i+=2)
          {
               x=i;
               while(x%2!=1)
               {
                    ans++;
               }
          }
          cout << ans << endl;
     }
}
