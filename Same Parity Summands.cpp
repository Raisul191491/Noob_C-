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
          int n,k;
          cin>>n>>k;
          int eve=(k-1)*2;
          int odd=(k-1);
          if(n<k)
          {
               cout << "NO\n";
               continue;
          }
          if((n-eve)%2==0 && n-eve>0)
          {
               cout << "YES\n";
               com(i,k-1)
               {
                    cout << "2" << " ";
               }
               cout << n-eve;
          }
          else if((n-odd)%2!=0 && n-odd>0)
          {
               cout << "YES\n";
               com(i,k-1)
               {
                    cout << "1" << " ";
               }
               cout << n-odd;
          }
          else
               cout << "NO";
          cout << endl;
     }
}
