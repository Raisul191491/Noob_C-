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
          string a,b;
          cin>>a>>b;
          vector<int>pos1,pos2;
          dom(i,n-1)
          {
               if(a[i]!=a[i-1])
                    pos1.push_back(i);
          }
          dom(i,n-1)
          {
               if(b[i]!=b[i-1])
                    pos2.push_back(i);
          }
          if(a[n-1]!=b[n-1])
               pos1.push_back(n);
          reverse(pos2.begin(),pos2.end());
          cout << pos1.size()+pos2.size() << " ";
          com(i,pos1.size()) cout << pos1[i] << " ";
          com(i,pos2.size()) cout << pos2[i] << " ";
          cout << endl;
     }
}

