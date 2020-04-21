#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n;
     cin>>n;
     int a[101],b[101];
     dom(i,n)
     {
          cin>>a[i];
          b[a[i]]=i;
     }
     dom(i,n)
     {
          cout << b[i] << " ";
     }
}
