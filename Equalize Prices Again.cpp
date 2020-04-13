#include<bits/stdc++.h>
using namespace std;
int main()
{
     int q;
     cin>>q;
     for(int i=0;i<q;i++)
     {
          long long int n,x=0,sum=0,d;
          cin>>n;
          int pro[n];
          for(int i=0;i<n;i++)
          {
               cin>>pro[i];
          }
          sum=accumulate(pro,pro+n,sum);
          d=sum/n;
          if(d*n<sum)
          {
               d++;
               cout << d << endl;
          }
          else
          {
               cout << d << endl;
          }
     }
}
