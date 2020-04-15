#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<n;i++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     int n,m;
     float sum=10001,s;
     cin>>n>>m;
     com(i,n)
     {
          float a,b;
          cin>>a>>b;
          s=(a/b)*m;
          sum=min(sum,s);
     }
     printf("%.8f",sum);
}
