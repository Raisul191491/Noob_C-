#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,m,team=0;
     cin>>n>>m;
     if(n<=1 && m<=1)
          team=0;
     else
     {
          while(n>0 && m>0)
          {
               if(n<=1 && m<=1)
                    break;
               else if(n<m)
               {
                    n--;
                    m-=2;
                    team++;
               }
               else
               {
                    m--;
                    n-=2;
                    team++;
               }
          }
     }
     cout << team << endl;
}
