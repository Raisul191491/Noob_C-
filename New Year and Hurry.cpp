#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,rem,time=0,prb=0;
     cin>>n>>k;
     rem=240-k;
     for(int i=1;i<=n;i++)
     {
          time+=(i*5);
          if(time<=rem)
          {
               prb++;
          }
          else
               break;
     }
     cout<< prb <<endl;

}
