#include<bits/stdc++.h>
using namespace std;
int main()
{
     int64_t n,x,i,sum=0;
     cin>>n>>x;
     for(i=1;i<=n;i++)
     {
          if(x%i==0 && x/i<=n)
               sum++;
     }
     cout<< sum << endl;
}
