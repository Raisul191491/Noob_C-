#include<bits/stdc++.h>
using namespace std;
int main()
{
     float k,x,y,d,c=0;
     int n;
     cin>>n>>k;
     int a[n],b[n];
     cin>>x>>y;
     for(int i=0;i<n-1;i++)
     {
          cin>>a[i]>>b[i];
     }
     for(int i=0;i<n-1;i++)
     {
          x=abs(x-a[i]);
          y=abs(y-b[i]);
          d=sqrt(x*x+y*y);
          c+=d;
          x=a[i];
          y=b[i];
     }
     k= (c/50)*k;
     printf("%.9f\n",k);
}
