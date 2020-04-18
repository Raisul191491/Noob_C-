#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,rest=0,fr=0;
     cin>>n;
     int a[n+n];
     com(i,n)
     {
          cin>>a[i];
          a[n+i]=a[i];
     }
     com(i,n+n)
     {
          if(a[i]==1 && a[i+1]==1)
               rest++;
          else
          {
               fr = max(rest,fr);
               rest=0;
          }
     }
     if(fr==0)
     {
          com(i,n)
          {
               if(a[i]==1)
               {
                    cout << "1" << endl;
                    return 0;
               }
          }
          cout << fr <<endl;
     }
     else
          cout << fr+1 << endl;
}
