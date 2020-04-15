#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
#define dom(n) for(int j=0;j<n;j++)
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(t)
     {
          int a,a1,b,b1,x,x1,y,y1;
          cin>>a>>b>>x>>y;
          a1=a*y;
          b1=b*x;
          x++,y++;
          x1=a*(b-y);
          y1=b*(a-x);
          cout<< max(a1,max(b1,max(x1,y1))) << endl;
     }
}
