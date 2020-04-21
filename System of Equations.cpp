#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,m,a,b,type=0;
     cin>>n>>m;
     for(int i=0;i*i<=m;i++)
     {
          a=m-i*i;
          if(a*a+i==n)
               type++;
     }
     cout << type << endl;
}
