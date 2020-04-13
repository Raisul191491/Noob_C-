#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,x=1,y=1,z;
     cin>>n;
     z=n-2;
     if(z%3==0)
     {
          z--;
          y++;
     }
     cout << x << " " << y << " " << z <<endl;
}
