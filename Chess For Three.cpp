#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,x,spec=3;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          cin>>x;
          if(x==spec)
          {
               cout << "NO" <<endl;
               return 0;
          }
          spec = 6-x-spec;
     }
     cout << "YES" << endl;
}
