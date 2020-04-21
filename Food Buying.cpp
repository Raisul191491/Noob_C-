#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())

using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          int s,rem,tot=0;
          cin>>s;
          while(s>9)
          {
               rem=(s/10)*10;
               tot+=rem;
               s-=rem;
               s+=rem/10;
          }
          tot+=s;
          cout << tot << endl;
     }
}
