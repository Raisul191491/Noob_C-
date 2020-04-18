#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,coin=0,tot=0;
     cin>>n;
     int step[n+1];
     step[0]=0;
     dom(i,n)
     {
          cin>>step[i];
     }
     com(i,n)
     {
          coin+=step[i]-step[i+1];
          if(coin<0)
          {
               tot-=coin;
               coin=0;
          }
     }
     cout << tot <<endl;
}
