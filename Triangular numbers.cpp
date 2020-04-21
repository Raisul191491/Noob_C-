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
     int n,mul=0;
     cin>>n;
     dom(i,500)
     {
          mul+=i;
          if(n==mul)
          {
               cout << "YES\n";
               return 0;
          }
          else if(mul>n)
          {
               cout << "NO\n";
               return 0;
          }
     }
}
