#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          long long int x,y,z,a,b,c;
          cin>>x>>y>>z;
          a=min(x,y);
          b=max(x,y);
          a+=z;
          if(a>b||b>a)
          {
               c=abs(a-b);
               a=min(a,b);
               a+=c/2;
          }
          cout << a <<endl;
     }

}
