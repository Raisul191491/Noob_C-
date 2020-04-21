#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,high=1,s,fin=1;
     cin>>n;
     s=n;
     int bar[n];
     com(i,n)
     {
          cin>>bar[i];
     }
     sortI(bar,n);
     com(i,n-1)
     {
          if(bar[i]==bar[i+1])
          {
               high++;
               s--;
               fin=max(high,fin);
          }
          else
          {
               high=1;
          }
     }
     cout << fin << " " << s << endl;
}
