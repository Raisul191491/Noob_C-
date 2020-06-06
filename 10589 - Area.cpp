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
int main()
{
     while(1)
     {
          int n,a;
          double cnt=0;
          cin>>n>>a;
          if(n==0 && a==0)
               break;
          com(i,n)
          {
               double x,y;
               cin>>x>>y;
               if(x*x+y*y<=a*a && (x-a)*(x-a)+y*y<=a*a && (y-a)*(y-a)+x*x<=a*a && (x-a)*(x-a)+(y-a)*(y-a)<=a*a)
                    cnt++;
          }
          cout << fixed << setprecision(5) << cnt*a*a/(double)n << endl;
     }
}
