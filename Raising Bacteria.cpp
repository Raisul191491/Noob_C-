#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,bac=0;
     cin>>n;
     while(n!=0)
     {
          if(n%2==0)
          {
               n/=2;
          }
          else
          {
               bac++;
               n/=2;
          }
     }
     cout << bac <<endl;
}
