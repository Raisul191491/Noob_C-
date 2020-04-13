#include<bits/stdc++.h>
using namespace std;
int main()
{
     int y,w,x,prob=6;
     cin>>y>>w;
     x=6-max(y,w)+1;
     if(prob%x==0)
     {
          prob/=x;
          x/=x;
     }
     else if(x%2==0)
     {
          prob/=2;
          x/=2;
     }
     cout << x << "/" << prob <<endl;
}
