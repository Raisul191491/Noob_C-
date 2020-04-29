#include<bits/stdc++.h>
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
     int n,lft;
     cin>>n;
     int time[n+2];
     time[0]=0;
     time[n+1]=90;
     dom(i,n)
     {
          cin>>time[i];
     }
     com(i,n+1)
     {
          if(time[i+1]-time[i]>15)
          {
               lft=time[i]+15;
               break;
          }
          else
               lft=time[i+1];
     }
     cout << lft << endl;

}
