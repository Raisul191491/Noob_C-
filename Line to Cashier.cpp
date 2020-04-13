#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,high=100000;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
          int tot=0,x;
          for(int j=0;j<a[i];j++)
          {
               cin>>x;
               tot+=(x*5);
          }
          tot+=(a[i]*15);
          high=min(high,tot);
     }
     cout << high << endl;
}
