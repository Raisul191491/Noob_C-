#include<bits/stdc++.h>
using namespace std;
int main()
{
     int s,v1,v2,t1,t2,f,l;
     cin>>s>>v1>>v2>>t1>>t2;
     f=2*t1+s*v1;
     l=2*t2+s*v2;
     if(f<l)
          cout << "First\n";
     else if(f==l)
          cout << "Friendship\n";
     else
          cout << "Second\n";
}
