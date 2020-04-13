#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,pol=0,crime=0,x;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          cin>>x;
          if(x>0)
          {
               pol+=x;
          }
          else
          {
               if(pol>0)
               {
                    pol--;
               }
               else
               {
                    crime++;
               }
          }
     }
     cout << crime <<endl;
}
