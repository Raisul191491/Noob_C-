#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=1;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,m;
     cin>>n>>m;
     int a[100005],b[100005];
     set<int>ord;
     dom(i,n)
     {
          cin>>a[i];
     }
     mom(i,n)
     {
          ord.insert(a[i]);
          b[i]=ord.size();
     }
     dom(i,m)
     {
          int x;
          cin>>x;
          cout << b[x] << endl;
     }
}
