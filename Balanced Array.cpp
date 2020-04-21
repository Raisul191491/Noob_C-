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
     int t;
     cin>>t;
     com(i,t)
     {
          int n,x,j=2;
          cin>>n;
          x=n/2;
          int a[n];
          if((n/2)%2==1)
          {
               cout << "NO\n";
          }
          else
          {
               cout << "Yes\n";
               for(int i=0;i<x;i++)
               {
                    a[i]=j;
                    cout<< j << " ";
                    j+=2;
               }
               //cout << x;
               for(int i=0;i<x/2;i++)
               {
                    cout<< a[i]-1 << " ";
               }
               for(int i=x/2;i<x;i++)
               {
                    cout<< a[i]+1 << " ";
               }
               cout << endl;
          }
     }
}
