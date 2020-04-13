#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,n,sim=0,ant=0;
     cin>>a>>b>>n;
     while(n!=0)
     {
          int x;
          x=__gcd(a,n);
          sim++;
          n-=x;
          if(n>0)
          {
               x=__gcd(b,n);
               ant++;
               n-=x;
          }
     }
     if(sim>ant)
          cout << "0\n";
     else
          cout << "1\n";
}
