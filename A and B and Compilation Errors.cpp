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
     int n,x;
     cin>>n;
     long long int a=0,b=0;
     com(i,n)
     {
          cin>>x;
          a+=x;
     }
     b=a;
     com(i,n-1)
     {
          cin>>x;
          a-=x;
     }
     cout << a <<endl;
     com(i,n-2)
     {
          cin>>x;
          b-=x;
     }
     cout << b-a << endl;
}
