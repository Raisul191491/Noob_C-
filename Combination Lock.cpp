#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,mo=0;
     cin>>n;
     string ori,lock;
     cin>>ori>>lock;
     for(int i=0;i<n;i++)
     {
          if(abs(ori[i]-lock[i])<=5)
          {
               mo+=abs(ori[i]-lock[i]);
          }
          else
          {
               mo+=(10-abs(ori[i]-lock[i]));
          }
     }
     cout << mo << endl;
}
