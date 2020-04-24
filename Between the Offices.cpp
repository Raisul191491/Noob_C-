#include<bits/stdc++.h>
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
     int san=0,sea=0,n;
     cin>>n;
     string s;
     cin>>s;
     com(i,s.size())
     {
          if(s[i]=='F' && s[i+1]=='S')
               sea++;
          else if(s[i]=='S' && s[i+1]=='F')
               san++;
     }
     cout << (san>sea ? "YES" : "NO") << endl;
}
