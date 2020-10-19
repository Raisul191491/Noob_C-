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
     fast
     int t;
     cin>>t;
     com(i,t)
     {
          ll n,x,flag=0;
          cin>>n;
          vector<ll>pos,con,non;
          map<ll,ll>mp;
          com(i,n)
          {
               cin>>x;
               pos.push_back(x);
               mp[x]++;
               if(mp[x]==1)
               {
                    con.push_back(x);
               }
               else
                    non.push_back(x);
               if(mp[x]>2)
                    flag=2;
          }
          sortvd(pos);
          if(flag==0 && mp[pos[0]]==1)
          {
               cout << "YES" << endl;
               sortvi(con);
               sortvd(non);
               com(i,con.size()) cout << con[i] << " ";
               com(i,non.size()) cout << non[i] << " ";
               cout << endl;
          }
          else
               cout << "NO" << endl;
     }
}
