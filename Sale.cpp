#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,mon=0;
     cin>>n>>m;
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);
     for(int i=0;i<m;i++)
     {
          if(a[i]<0)
          {
               mon+=abs(a[i]);
          }
     }
     cout << mon << endl;
}
