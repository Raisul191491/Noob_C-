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
     int n,flag=0;
     cin>>n;
     vector<pair<int,string>>s;
     com(i,n)
     {
          string x;
          cin>>x;
          s.push_back({x.size(),x});
     }
     sortvi(s);
     com(i,n-1)
     {
          if(s[i+1].sc.find(s[i].sc)==string::npos)
          {
               flag=1;
               break;
          }
     }
     if(flag==1)
          cout << "NO\n";
     else
     {
          cout << "YES\n";
          com(i,s.size())
          {
               cout << s[i].sc << endl;
          }
     }
}
