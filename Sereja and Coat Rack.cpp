#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,d,m,pro=0;
     cin>>n>>d;
     int a[n];
     com(i,n)
     {
          cin>>a[i];
     }
     sortI(a,n);
     cin>>m;
     if(m<=n)
     {
          com(i,m)
          {
               pro+=a[i];
          }
     }
     else
     {
          m=m-n;
          com(i,n)
          {
               pro+=a[i];
          }
          pro-=(m*d);
     }
     cout << pro << endl;
}
