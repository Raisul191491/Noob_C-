#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,d,mov=0,tot=0;
     cin>>n>>d;
     int a[n];
     com(i,n)
     {
          cin>>a[i];
     }
     dom(i,n)
     {
          if(a[i]<=a[i-1])
          {
               mov=(a[i-1]-a[i])/d;
               a[i]+=(mov+1)*d;
               tot+=mov+1;
               //cout << a[i] <<" ";
          }
     }
     cout << tot <<endl;
}
