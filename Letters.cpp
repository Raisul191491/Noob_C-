#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,m,i,x;
     scanf("%lld%lld",&n,&m);
     long long int room[n];
     room[0]=0;
     for(i=1;i<=n;i++)
     {
          scanf("%lld",&room[i]);
          room[i]+=room[i-1];
     }
     for(i=1;i<=m;i++)
     {
          scanf("%lld",&x);
          int j=1;
          while(x>room[j])
               j++;
          printf("%lld %lld\n",j,x-room[j-1]);
     }
}
