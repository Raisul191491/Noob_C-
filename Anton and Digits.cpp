#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,d,x,y,sum=0;
     cin>>a>>b>>c>>d;
     x=min(a,min(c,d));
     sum+=(x*256);
     a-=x;
     y=min(a,b);
     sum+=(y*32);
     cout << sum <<endl;
}
