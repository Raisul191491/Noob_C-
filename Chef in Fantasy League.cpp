#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
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
#define endl          '\n'
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          ll n,s;
          cin>>n>>s;
          vector<ll>pos,con;
          ll a[n],b[n];
          com(i,n)
          {
               cin>>a[i];
          }
          com(i,n)
          {
               cin>>b[i];
               if(b[i])
                    pos.push_back(a[i]);
               else
                    con.push_back(a[i]);
          }
          sortvi(pos);
          sortvi(con);
          ll lef=100-s;
          if(pos.size()==0 || con.size()==0)
               cout << "no\n";
          else if(pos[0]+con[0]<=lef)
               cout << "yes\n";
          else
               cout << "no\n";
     }
}
