#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int func(int x)
{
     long long int rem=0,mul=1;
     while(x!=0)
     {
          if(x%10!=0)
          {
               rem+=((x%10)*mul);
               mul*=10;
          }
          x/=10;
     }
     return rem;
}
int main()
{
     long long int a,b,c;
     cin>>a>>b;
     c=a+b;
     if(func(a)+func(b)==func(c))
     {
          cout << "YES\n";
     }
     else
          cout << "NO\n";
}
