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
     long long int n,b,d;
     cin>>n>>b>>d;
     long long int was=0,sum=0,x;
     vector<int>a;
     com(i,n)
     {
          cin>>x;
          if(x<=b)
               a.push_back(x);
     }
     com(i,a.size())
     {
          sum+=a[i];
          if(sum>d)
          {
               was++;
               sum=0;
          }
     }
     cout << was << endl;
}
