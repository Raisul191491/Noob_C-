#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     string s;
     int m;
     cin>>s>>m;
     int q[s.size()];
     q[0]=0;
     com(i,s.size())
     {
          if(s[i]==s[i+1])
               q[i+1]=q[i]+1;
          else
               q[i+1]=q[i];
     }
     com(i,m)
     {
          int l,r;
          cin>>l>>r;
          cout << q[r-1]-q[l-1] << endl;
     }
}
