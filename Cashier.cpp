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
     int n,l,a,brk=0,tim=0,sta=0;
     cin>>n>>l>>a;
     vector<int>mp;
     int pos[n],con[n];
     com(i,n)
     {
          cin>>pos[i]>>con[i];
     }
     com(i,n)
     {
          tim=pos[i];
          mp.push_back(tim-sta);
          sta=tim+con[i];
     }
     mp.push_back(l-sta);
     com(i,mp.size())
     {
          brk+=mp[i]/a;
     }
     cout << brk << endl;
}
