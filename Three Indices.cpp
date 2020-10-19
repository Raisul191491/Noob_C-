#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fr            first
#define sc            second
#define lcm(a,b)      (a*b)/__gcd(a,b)
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
#define endl          '\n'
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          int n;
          cin>>n;
          int a[n];
          com(i,n) cin>>a[i];
          vector<int>sum;
          dom(i,n-2)
          {
               if(a[i]>a[i+1] && a[i]>a[i-1])
               {
                    sum.push_back(i);
                    sum.push_back(i+1);
                    sum.push_back(i+2);
                    break;
               }
          }
          if(sum.size()==3)
          {
               cout << "YES" << endl;
               com(i,3) cout << sum[i] << " ";
               cout << endl;
          }
          else
               cout <<  "NO" << endl;
     }
}
