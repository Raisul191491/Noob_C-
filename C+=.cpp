#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          long long a,b,n,x,y,sum=0,cnt=0;
          cin>>a>>b>>n;
          x=max(a,b);
          y=min(a,b);
          while(sum<=n)
          {
               sum=x+y;
               y=x;
               x=sum;
               cnt++;
          }
          cout << cnt << endl;
     }
}
