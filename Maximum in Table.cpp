#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())

using namespace std;
int main()
{
     int n,x;
     cin>>n;
     int a[n]={1};
     com(i,n)
     {
          a[i]=1;
     }
     if(n==1)
     {
          cout << "1\n";
          return 0;
     }
     for(int i=1;i<n;i++)
     {
          for(int j=1;j<n;j++)
          {
               a[j]+=a[j-1];
               x=a[j];
          }
     }
     cout << x << endl;
}
