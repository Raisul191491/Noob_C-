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
    int mis=0;
    string s;
    cin>>s;
    mis=s.size()/2;
    if(s.size()%2==0)
    {
         cout << mis << endl;
         return 0;
    }
    else
    {
         dom(i,s.size()-1)
         {
              if(s[i]=='1')
              {
                   cout << mis+1 << endl;
                   return 0;
              }
         }
         cout << mis << endl;
    }
}
