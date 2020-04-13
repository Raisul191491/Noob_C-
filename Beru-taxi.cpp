#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,n,x,y,v;
     float dist,tim1,tim2=5000;
     cin>>a>>b>>n;
     for(int i=0;i<n;i++)
     {
          cin>>x>>y>>v;
          dist=sqrt(((a-x)*(a-x))+((b-y)*(b-y)));
          tim1=dist/v;
          tim2=min(tim2,tim1);
     }
     printf("%.20lf\n",tim2);

}
