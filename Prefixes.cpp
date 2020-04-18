#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     int n,step=0;
     string s;
     cin>>n>>s;
     for(int i=0;i<n-1;i+=2)
     {
          if(s[i]*s[i+1]=='a'*'b')
               continue;
          else
          {
               s[i]='a';
               s[i+1]='b';
               step++;
          }
     }
     cout << step <<endl;
     cout << s <<endl;
}
