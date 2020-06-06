#include<bits/stdc++.h>
typedef long long     ll;
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
     int t;
     cin>>t;
     com(i,t)
     {
          int n,k,temp=0;
          cin>>n>>k;
          vector<int>a,b;
          com(i,n)
          {
               int co;
               cin>>co;
               a.push_back(co);
          }
          com(i,n)
          {
               int co;
               cin>>co;
               b.push_back(co);
          }
          sortvi(a);
          sortvd(b);
          com(i,k)
          {
               if(a[i]<b[i])
                    a[i]=b[i];
               else
                    break;
          }
          temp=sumall(a,temp);
          cout << temp << endl;
     }
}
