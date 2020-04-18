#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     string s;;
     cin>>s;
     int cnt=0;
     com(i,s.size())
     {
          if(s[i]=='D' && s[i+1]=='a' && s[i+2]=='n' && s[i+3]=='i' && s[i+4]=='l')
          {
               cnt++;
          }
          else if(s[i]=='S' && s[i+1]=='l' && s[i+2]=='a' && s[i+3]=='v' && s[i+4]=='a')
          {
               cnt++;
          }
          else if(s[i]=='N' && s[i+1]=='i' && s[i+2]=='k' && s[i+3]=='i' && s[i+4]=='t' && s[i+5]=='a')
          {
               cnt++;
          }
          else if(s[i]=='O' && s[i+1]=='l' && s[i+2]=='y' && s[i+3]=='a')
          {
               cnt++;
          }
          else if(s[i]=='A' && s[i+1]=='n' && s[i+2]=='n')
          {
               cnt++;
          }
     }
     //cout << cnt;
     if(cnt==1)
     {
          cout << "YES\n";
     }
     else
          cout << "NO\n";
}
