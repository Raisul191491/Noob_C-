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
     string s;
     cin>>s;
     int cnt=0,scnt=0,n=s.length(),bin=0,sin=0;
     vector<int>vv;
     com(i,n)
     {
          if()
          if(i && s[i]==')' && s[i-1]==':')
          {
               vv.push_back(cnt);
               scnt++;
               cnt=0;
          }
          else if(s[i]=='(' && s[i+1]==':' && s[i+2]!=')')
          {
               cnt++;
          }
     }
     vv.push_back(cnt);
     sortvd(vv);
     cout << scnt+vv[0] << endl;
}
