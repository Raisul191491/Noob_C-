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
          int n,x=3,y=1;
          cin>>n;
          while(1)
          {
               if(n%x==0)
               {
                    y=n/x;
                    cout << y << endl;
                    break;
               }
               else
               {
                    y++;
                    x+=pow(2,y);
               }
          }
     }
}