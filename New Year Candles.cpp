#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,x,sum=0;
     cin>>a>>b;
     sum=a;
     while(1)
     {
          x=a/b;
          a=a/b+a%b;
          if(x>0)
          {
               sum+=x;
          }
          else
               break;
     }
     cout << sum << endl;
}
