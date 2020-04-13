#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i=1;i<=n;i++)
          cin>>a[i];
     for(int i=1;i<=n;i++)
     {
          if(a[a[a[i]]]==i)
          {
               cout << "YES\n";
               return 0;
          }
     }
     cout << "NO\n";
}
