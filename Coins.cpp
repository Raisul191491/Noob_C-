#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,s,coin=0,x;
     cin>>n>>s;
     for(int i=n;i>0;i--)
     {
          x=s/i;
          coin+=x;
          s-=(x*i);
          if(s==0)
               break;
     }
     cout << coin <<endl;
}
