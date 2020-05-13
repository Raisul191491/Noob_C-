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
     int t;
     cin>>t;
     com(i,t)
     {
          int n,k;
          cin>>n>>k;
          set<int>noob;
          com(i,n)
          {
               int x;
               cin>>x;
               noob.insert(x);
          }
          if(noob.size()>k) cout << "-1\n";
          else
          {
               cout << n*k << endl;
               com(i,n)
               {
                    for(int a:noob)
                         cout << a << " ";
                    com(i,k-noob.size())
                    {
                         cout << "1 ";
                    }
               }
               cout << endl;
          }
     }
}
