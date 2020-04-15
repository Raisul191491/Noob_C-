#include<bits/stdc++.h>
#define com(n)    for(int i=0;i<n;i++)
#define dom(n)    for(int j=0;j<n;j++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     int n;
     cin>>n;
     int a[n],b[n];
     com(n)
     {
          cin>>a[i];
          b[i]=a[i];
     }
     sortI(b,n);
     int x=b[0]+b[n-1];
     com(n)
     {
          dom(n)
          {
               if(i!=j && a[i]+a[j]==x)
               {
                    cout << i+1 << " " <<j+1 <<endl;
                    a[i]=0;
                    a[j]=0;
               }
          }
     }
}
