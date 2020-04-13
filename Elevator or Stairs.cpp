#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,y,z,t1,t2,t3,stair,elev;
     cin>>x>>y>>z>>t1>>t2>>t3;
     z=abs(x-z);
     x=abs(x-y);
     stair=x*t1;
     elev=3*t3+x*t2+z*t2;
     if(elev<=stair)
     {
          cout << "YES\n";
     }
     else
          cout << "NO\n";
}
