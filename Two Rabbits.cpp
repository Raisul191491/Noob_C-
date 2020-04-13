#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          int x,y,a,b;
          cin>>x>>y>>a>>b;
          x=y-x;
          a=a+b;
          if(x%a==0)
          {
               cout << x/a << endl;
          }
          else
               cout << "-1\n";
     }
}
