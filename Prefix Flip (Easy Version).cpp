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
          char ch;
          int a[1005],b[1005];
          vector<int>pos;
          dom(i,n)
          {
               cin>>ch;
               a[i]=ch-'0';
          }
          dom(i,n)
          {
               cin>>ch;
               b[i]=ch-'0';
          }
          for(int i=n;i>1;i--)
          {
               if(a[i]!=b[i])
               {
                    if(a[i]!=a[1])
                         pos.push_back(1);
                    pos.push_back(i);
                    int x=1,y=i,z=i;
                    while(x<y)
                    {
                         swap(a[x],a[y]);
                         x++;
                         y--;
                    }
                    dom(j,z) a[j]^=1;
               }
          }
          if(a[1]!=b[1]) pos.push_back(1);
          cout << pos.size() << " ";
          com(i,pos.size()) cout << pos[i] << " ";
          cout << endl;
     }
}
