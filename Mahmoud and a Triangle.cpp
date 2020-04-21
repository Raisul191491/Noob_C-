#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n;
     cin>>n;
     int tr[n];
     com(i,n)
     {
          cin>>tr[i];
     }
     sortI(tr,n);
     com(i,n-2)
     {
          int a,b,c;
          a=tr[i];
          b=tr[i+1];
          c=tr[i+2];
          if(a+b>c && b+c>a && c+a>b)
          {
               cout << "YES\n";
               return 0;
          }
     }
     cout << "NO\n";
}
