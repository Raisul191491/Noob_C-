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
#define PI            3.141592653589793238462643383279
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          ll a,b,c,d;
          cin>>a>>b>>c>>d;
          if(a<=b)
               cout << b << endl;
          else
          {
               if(c<=d)
                    cout << -1 << endl;
               else
               {
                    float x=a-b,y=c-d;
                    x=ceil(x/y);
                    //cout << x << endl;
                    cout << (ll)(b+x*c) << endl;
               }
          }
     }
}
