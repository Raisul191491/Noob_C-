#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,x,dis=0;
     cin>>n>>x;
     for(int i=0;i<n;i++)
     {
          char a;
          long long int b;
          cin>>a>>b;
          if(a=='+')
          {
               x+=b;
          }
          else
          {
               if(b<=x)
               {
                    x-=b;
               }
               else
                    dis++;
          }
     }
     cout << x << " " <<dis <<endl;
}
