#include<bits/stdc++.h>
using namespace std;
int main()
{
     int r,d,n,sauce=0;
     cin>>r>>d>>n;
     for(int i=0;i<n;i++)
     {
          float x,y,z,dis;
          cin>>x>>y>>z;
          dis=sqrt(x*x+y*y);
          if(dis+z<=r && dis-z>=(r-d))
               sauce++;
          else
               continue;
     }
     cout << sauce <<endl;
}
