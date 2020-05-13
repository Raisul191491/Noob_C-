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
     ll n,tile;
     cin>>n;
     if(n<3)
     {
          cout << n << endl;
          return 0;
     }
     vector<ll>npr;
     for(ll i=2;i*i<=n;i++)
     {
          if(n%i==0)
          {
               npr.push_back(i);
               if(n/i!=i)
                    npr.push_back(n/i);
          }
     }
     if(npr.size()==0)
     {
          cout << n << endl;
          return 0;
     }
     ll sta=npr[0];
     com(i,npr.size())
     {
          tile=__gcd(tile,npr[i]);
     }
     cout << tile << endl;

}
