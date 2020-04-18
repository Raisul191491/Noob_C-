#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     if(c==0)
     {
          if(a==b)
               cout << "YES\n";
          else
               cout << "NO\n";
     }
     else
     {
          if((b-a)/c>=0 && (b-a)%c==0)
               cout << "YES\n";
          else
               cout << "NO\n";
     }
}
