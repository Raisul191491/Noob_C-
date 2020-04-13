#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,seq=0,s=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     for(int i=0;i<n-1;i++)
     {
          if(a[i]<a[i+1])
          {
               seq++;
          }
          else
          {
               s=max(s,seq);
               seq=0;
          }
     }
     s=max(s,seq);
     cout << s+1 << endl;
}
