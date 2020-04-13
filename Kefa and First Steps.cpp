#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a=0,sum=1,sum2=1;
     cin>>n;
     int ara[n];
     while(a<n)
     {
          cin>>ara[a];
          a++;
     }
     for(int i=0;i<n-1;i++)
     {
          if(ara[i]<=ara[i+1])
          {
               sum++;
          }
          else
          {
               sum=1;
          }
          sum2= max(sum,sum2);
     }
     cout << sum2;


}
