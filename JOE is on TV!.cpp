#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     float n,point=0,x=1;
     cin>>n;
     dom(i,n)
     {
          point+=1/x;
          x++;
     }
     cout << fixed << setprecision(12) << point << endl;
}
