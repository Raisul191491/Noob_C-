#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,h,row=0,a;
     cin>>n>>h;
     row=n;
     while(n--)
     {
          cin>>a;
          if(a>h)
               row++;
     }
     cout<< row << endl;
}
