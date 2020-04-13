#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,m,num[100000];
     cin>>t;
     for(int i=0;i<t;i++)
     {
          int sum=0;
          cin>>n>>m;
          for(int j=0;j<n;j++)
          {
               cin>>num[j];
          }
          for(int j=0;j<n;j++)
          {
               sum+=num[j];
          }
          if(sum>=m)
          {
               cout<< m <<endl;
          }
          else
               cout<< sum <<endl;
     }
}
