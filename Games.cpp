#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,sum=0;
     scanf("%d",&n);
     int host[n],guest[n];
     for(int i=0;i<n;i++)
     {
          scanf("%d%d",&host[i],&guest[i]);
     }
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               if(host[i]==guest[j])
               {
                    sum++;
               }
          }
     }
     printf("%d\n",sum);
}
