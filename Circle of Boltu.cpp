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
          vector<pair<int,int>>num;
          int x,y;
          com(i,n)
          {
               cin>>x>>y;
               num.push_back({x,y});
          }
          ll mx=0;
          com(i,n)
          {
               com(j,n)
               {
                    if(i==j)
                         continue;
                    ll dis= pow((num[i].fr-num[j].fr),2)+pow((num[i].sc-num[j].sc),2);
                    mx=max(mx,dis);
               }
          }
          cout << "Case " << i+1 << ": "<< mx << endl;
     }
}
