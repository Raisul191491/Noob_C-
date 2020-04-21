#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,ind;
     cin>>n;
     int a[n];
     com(i,n)
     {
          cin>>a[i];
     }
     sortI(a,n);
     ind=a[n-1]+1;
     if(a[0]>1)
          ind=1;
     else
     {
          for(int i=1;i<n;i++)
          {
               if(a[i]-a[i-1]>1)
               {
                    ind=a[i-1]+1;
                    break;
               }
          }
     }
     cout << ind << endl;
}
