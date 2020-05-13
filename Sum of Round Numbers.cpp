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
     vector<int>sum;
     com(i,t)
     {
          int n,rem,x=1,cnt=0;
          cin>>n;
          sum.clear();
          while(n!=0)
          {
               rem=n%10;
               rem*=x;
               x*=10;
               n/=10;
               if(rem>0)
               {
                    cnt++;
                    sum.push_back(rem);
               }
          }
          cout << sum.size() << endl;
          com(i,sum.size())
          {
               cout << sum[i] << " ";
          }
          cout << endl;
     }
}
