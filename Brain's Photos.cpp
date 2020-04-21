#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,m,bg=0,cg=0;
     cin>>n>>m;
     char a;
     com(i,n)
     {
          com(j,m)
          {
               cin>>a;
               if(a=='W' || a=='B' || a=='G')
                    bg++;
               else
                    cg++;
          }
     }
     if(cg==0)
          cout << "#Black&White\n";
     else
          cout << "#Color\n";
}
