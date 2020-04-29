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
     int n;
     cin>>n;
     int moon[n];
     com(i,n)
     {
          cin>>moon[i];
     }
     if(n==1 && moon[n-1]!=15 && moon[n-1]!=0)
          cout << "-1\n";
     else if((moon[n-2]>moon[n-1] && moon[n-1]!=0) || moon[n-1]==15)
          cout << "DOWN\n";
     else
          cout << "UP\n";
}
