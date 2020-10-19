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
ll meX=2e5+10,cnt=0;
vector<vector<ll>>pos;
vector<ll>con(meX);

void dfs(int m)
{
     con[m]=1;
     for(auto n:pos[m])
     {
          if(!con[n])
          {
               dfs(n);
               cnt++;
          }
     }
}


int main()
{
     int n,k;
     cin>>n>>k;
     pos.resize(n);
     com(i,k)
     {
          int x,y;
          cin>>x>>y;
          x--;
          y--;
          pos[x].push_back(y);
          pos[y].push_back(x);
     }
     com(i,n)
     {
          if(!con[i])
          {
               dfs(i);
          }
     }
     cout << k-cnt << endl;
}
