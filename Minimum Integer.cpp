#include<bits/stdc++.h>
using namespace std;
int main()
{
     int q,a,b,c,x;
     cin>>q;
     while(q--)
     {
          cin>>a>>b>>c;
          if(c<a)
          {
               cout<< c <<endl;
          }
          else
          {
               x=b/c;
               cout << (x+1)*c <<endl;
          }
     }
}
