#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,e=0;
     cin>>n;
     string num;
     cin>>num;
     for(int i=0;i<n;i++)
     {
          if(num[i]=='8')
          {
               e++;
          }
     }
     n/=11;
     cout << min(e,n) <<endl;
}
