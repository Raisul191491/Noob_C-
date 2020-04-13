#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,to=0,a[2001],x;
     cin>>n>>k;
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);
     x=(n/3)*3;
     for(int i=0;i<x;i=i+3)
     {
          if(a[i+2]+k<=5)
          {
               to++;
          }
          else
               break;
     }
     cout<< to <<endl;
}
