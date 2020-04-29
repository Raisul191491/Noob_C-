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
     string s,x;
     int mis=0;
     cin>>s;
     x=s;
     reverse(x.begin(),x.end());
     com(i,s.size()/2)
     {
          if(s[i]!=x[i])
               mis++;
          if(mis>1)
               break;
     }
     if(mis==1 || (mis==0 && s.size()%2==1))
     {
          cout << "YES\n";
     }
     else
          cout<< "NO\n";
}
