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
int main()
{
     int h,a,c,x,y;
     vector<int>pos;
     cin>>h>>a>>c>>x>>y;
     while(1)
     {
          if(h<=y && x>a)
          {
               pos.push_back(1);
               h+=c;
               h-=y;
          }
          else
          {
               x-=a;
               h-=y;
               pos.push_back(0);
               if(x<=0) break;
          }
     }
     cout << pos.size() << endl;
     com(i,pos.size())
     {
          if(pos[i]) cout << "HEAL\n";
          else cout << "STRIKE\n";
     }
}
