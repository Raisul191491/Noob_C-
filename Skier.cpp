#include<bits/stdc++.h>
typedef long long     ll;
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
using namespace std;
map<vector<int>,int>mp;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          int x=0,y=0,cnt=0;
          string s;
          cin>>s;
          com(i,s.size())
          {
               int a=x,b=y;
               if(s[i]=='N') x++;
               else if(s[i]=='S') x--;
               else if(s[i]=='W') y++;
               else y--;
               if(mp[{a,b,x,y}]) cnt++;
               else
               {
                    cnt+=5;
                    mp[{a,b,x,y}]++;
                    mp[{x,y,a,b}]++;
               }
          }
          cout << cnt << endl;
          mp.clear();
     }
}
