#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,x,y,x0=0,x1=0,y0=0,y1=0;
     cin>>n;
     while(n--)
     {
          cin>>x>>y;
          if(x==0) x0++;
          else x1++;
          if(y==0) y0++;
          else y1++;
     }
     x=min(x0,x1)+min(y0,y1);
     cout<< x <<endl;
}
