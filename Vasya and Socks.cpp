#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,day,x;
     cin>>n>>m;
     day=n;
     while(n/m>0)
     {
          x=n/m;
          n=n/m+n%m;
          day+=x;
     }
     cout << day <<endl;
}
