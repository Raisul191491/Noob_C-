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
     freopen("collectingofficer.in", "r", stdin);
     int t;
     cin>>t;
     com(i,t)
     {
          int n,mini=1000000;
          cin>>n;
          string s;
          cin>>s;
          com(i,n)
          {
               char cc='B';
               if(s[i]=='A')
               {
                    for(int j=i+1;j<n;j++)
                    {
                         if(s[j]==cc)
                         {
                              if(cc=='Z')
                              {
                                   mini=min(mini,j-i+1);
                                   break;
                              }
                              cc++;
                         }
                    }
               }
          }
          cout << mini << endl;
     }
}
