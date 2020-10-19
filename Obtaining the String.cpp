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
vector<ll>pos;
int main()
{
    fast
    int n,cnt=0;
    cin>>n;
    string s,t,u,v;
    cin>>s>>t;
    if(s==t)
    {
        cout << "0\n";
        return 0;
    }
    u=s,v=t;
    sortvi(u);
    sortvi(v);
    if(u!=v)
        cout << "-1\n";
    else
    {
         com(i,n)
         {
              if(s[i]!=t[i])
              {
                   ll x=i;
                   while(s[x]!=t[i])
                   {
                        x++;
                   }
                   while(x>i)
                   {
                        pos.push_back(x);
                        swap(s[x-1],s[x]);
                        cnt++;
                        x--;
                   }
              }
         }
         cout << cnt << endl;
         com(i,pos.size()) cout << pos[i] << " ";
    }
}
