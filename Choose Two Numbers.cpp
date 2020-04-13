#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n,greater<int>());
     cin>>m;
     int b[m];
     for(int i=0;i<m;i++)
     {
          cin>>b[i];
     }
     sort(b,b+m,greater<int>());
     cout << a[0] << " " << b[0] <<endl;
}
