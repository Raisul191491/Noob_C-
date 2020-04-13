#include<bits/stdc++.h>
using namespace std;
int main()
{
     long int x,y,z,a,b,c,s;
     cin>>x>>y>>z>>a>>b>>c;
     if(x<=a)
     {
          a=a-x;
     }
     else
     {
          cout << "NO" << endl;
          return 0;
     }
     s=a+b;
     if(s>=y)
     {
          s=s-y;
     }
     else
     {
          cout << "NO" << endl;
          return 0;
     }
     if(s+c>=z)
     {
          cout<< "YES" <<endl;
     }
     else
     {
          cout << "NO" << endl;
          return 0;
     }


}
