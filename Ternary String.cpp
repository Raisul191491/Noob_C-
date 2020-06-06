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
using namespace std;
int main()
{
     int t;
     string s;
     cin>>t;
     com(i,t)
     {
          cin>>s;
          int on=-1,tw=-1,th=-1,pos=200001;
          com(i,s.size())
          {
               if(s[i]=='1')
                    on=i;
               if(s[i]=='2')
                    tw=i;
               if(s[i]=='3')
                    th=i;
               if(on>-1 && tw>-1 && th>-1)
                    pos=min(pos,i-min(on,min(tw,th)));
          }
          if(on==-1 || tw==-1 || th==-1)
               cout << "0\n";
          else
               cout << pos+1 << endl;
     }
}
