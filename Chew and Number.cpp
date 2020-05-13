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
     string s;
     cin>>s;
     if(s[0]-'0'>4 && s[0]-'0'<9)
          s[0]=(9-(s[0]-'0'))+'0';
     cout << s[0];
     dom(i,s.size()-1)
     {
          if(s[i]-'0'>4)
               cout << 9-(s[i]-'0');
          else
               cout << s[i];
     }
}
