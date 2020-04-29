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
     string a;
     com(i,3)
     {
          string s;
          cin>>s;
          a+=s[0];
     }
     if(a=="prr" || a=="spp" || a=="rss") cout << "F\n";
     else if(a=="rpr" || a=="psp" || a=="srs") cout << "M\n";
     else if(a=="rrp" || a=="pps" || a=="ssr") cout << "S\n";
     else cout << "?\n";
}
