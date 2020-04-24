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
     int n;
     cin>>n;
     com(i,n)
     {
          int flag;
          string s;
          cin>>s;
          sortvi(s);
          com(i,s.size()-1)
          {
               if(s[i+1]==s[i]+1)
                    flag=0;
               else
               {
                    flag=1;
                    break;
               }
          }
          if(flag==1)
               cout << "No\n";
          else
               cout << "Yes\n";
     }
}
