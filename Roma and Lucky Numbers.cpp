#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,sum=0;
     cin>>n>>k;
     while(n--)
     {
          int x,rem,luck=0;
          cin>>x;
          while(x!=0)
          {
               rem=x%10;
               x=x/10;
               if(rem==4 || rem==7)
               {
                    luck++;
               }
          }
          if(luck<=k)
               sum++;
     }
     cout << sum << endl;
}
