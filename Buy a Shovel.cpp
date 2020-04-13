#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k,r,x,sum=0,i=1;
     cin>>k>>r;
     while(1)
     {
          x=(i*k)%10;
          if(x-r==0 || x==0)
          {
               sum++;
               break;
          }
          else
          {
               sum++;
          }
          i++;
     }
     cout << sum <<endl;

}
