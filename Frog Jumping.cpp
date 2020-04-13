#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          long long int a,b,k,x,pos;
          cin>>a>>b>>k;
          if(k%2==0)
          {
               x=k/2;
               pos=a*x-b*x;
          }
          else
          {
               x=(k-1)/2;
               pos=(x+1)*a-x*b;
          }
          cout << pos << endl;
     }
}
