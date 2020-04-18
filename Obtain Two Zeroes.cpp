#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          int a,b;
          cin>>a>>b;
          if((a+b)%3!=0 || a>b*2 || b>a*2)
               cout << "NO\n";
          else
               cout << "YES\n";
     }
}
