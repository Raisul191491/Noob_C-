#include<bits/stdc++.h>
#define com(n)    for(int i=0;i<n;i++)
#define dom(n)    for(int j=0;j<n;j++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     long long int  n,coin=0,m=0,mul=1;
     cin>>n;
     int a[n];
     com(n)
     {
          cin>>a[i];
          if(a[i]<(-1))
          {
               coin+=abs(a[i]-(-1));
               a[i]=-1;
          }
          else if(a[i]>1)
          {
               coin+=abs(a[i]-1);
               a[i]=1;
          }
          else if(a[i]==0)
          {
               coin++;
               m++;
               a[i]=0;
          }
     }
     com(n)
     {
          mul*=a[i];
     }
     if(mul==1)
          cout << coin <<endl;
     else if(mul<1 && m>0)
          cout << coin <<endl;
     else
          cout << coin+2 <<endl;
}
