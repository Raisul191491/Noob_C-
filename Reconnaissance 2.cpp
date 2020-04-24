#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())

using namespace std;
int main()
{
     int n,b,c;
     cin>>n;
     int a[n+n];
     com(i,n)
     {
          cin>>a[i];
          a[i+n]=a[i];
     }
     int x=10000,y;
     com(i,n+n-1)
     {
          y=abs(a[i+1]-a[i]);
          if(y<x)
          {
               x=min(x,y);
               b=i+1;
               c=i+2;
               if(c>n)
                    c-=n;
          }
     }
     cout << b << " " << c << endl;
}
