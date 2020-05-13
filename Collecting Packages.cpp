#include<bits/stdc++.h>
typedef long long     ll;
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
     cin>>t;
     com(i,t)
     {
          int n,flag=0;
          cin>>n;
          vector<pair<int,int>>pos;
          com(i,n)
          {
               int x,y;
               cin>>x>>y;
               pos.push_back(make_pair(x,y));
          }
          sortvi(pos);
          dom(i,pos.size()-1)
          {
               if(pos[i].first<pos[i-1].first || pos[i].second<pos[i-1].second)
               {
                    cout << "NO\n";
                    flag=1;
                    break;
               }
          }
          if(flag==1)
               continue;
          pair<int,int>sta{0,0};
          cout << "YES\n";
          com(i,pos.size())
          {
               int x,y;
               x=pos[i].first-sta.first;
               y=pos[i].second-sta.second;
               com(j,x)
               {
                    cout << "R";
               }
               com(j,y)
               {
                    cout << "U";
               }
               sta=pos[i];
          }
          cout << endl;
     }
}
