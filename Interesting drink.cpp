#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,q,m,drink;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);
     cin>>q;
     for(int i=0;i<q;i++)
     {
          cin>>m;
          drink=upper_bound(a,a+n,m)-a;
          cout << drink <<endl;
     }
}
