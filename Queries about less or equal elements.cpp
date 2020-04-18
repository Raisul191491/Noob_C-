#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,m,big=0;
     cin>>n>>m;
     int a[n],b[m];
     com(i,n)
     {
          cin>>a[i];
     }
     com(i,m)
     {
          cin>>b[i];
     }
     sortI(a,n);
     com(i,m)
     {
          cout << upper_bound(a,a+n,b[i])-a << " ";
     }
}
