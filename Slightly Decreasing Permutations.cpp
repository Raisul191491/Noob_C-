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
     int n,k,x;
     cin>>n>>k;
     x=n;
     vector<int>per;
     while(k>0)
     {
          per.push_back(x);
          x--;
          k--;
     }
     dom(i,n-k)
     {
          per.push_back(i);
     }
    com(i,n)
    {
         cout << per[i] << " " ;
    }
}
