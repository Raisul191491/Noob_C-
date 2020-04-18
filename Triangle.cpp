#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int tri[4];
     com(i,4)
     {
          cin>>tri[i];
     }
     sortI(tri,4);
     if(tri[0]+tri[1]>tri[2] || tri[1]+tri[2]>tri[3])
          cout << "TRIANGLE\n";
     else if(tri[0]+tri[1]==tri[2] || tri[1]+tri[2]==tri[3])
          cout << "SEGMENT\n";
     else
          cout << "IMPOSSIBLE\n";
}
