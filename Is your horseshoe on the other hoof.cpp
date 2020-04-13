#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n=4,x,y,ara[4];
     for(x=0;x<n;x++)
     {
          cin>>ara[x];
     }
     y=n;
     sort(ara,ara+4);
     for(x=0;x<n;x++)
     {
          if(ara[x]==ara[x+1])
          {
               y--;
          }
     }
     cout << n-y << endl;
}
