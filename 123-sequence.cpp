#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,x,one=0,two=0,thr=0;
     cin>>n;
     com(i,n)
     {
          cin>>x;
          if(x==1)
               one++;
          else if(x==2)
               two++;
          else if(x==3)
               thr++;
     }
     cout << n-max(max(one,two),thr) <<endl;
}
