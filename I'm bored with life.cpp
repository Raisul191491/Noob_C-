#include<bits/stdc++.h>
using namespace std;
int main()
{
     long int a,b,gcd=1;
     cin>>a>>b;
     a=min(a,b);
     for(int i=1;i<=a;i++)
     {
          gcd=gcd*i;
     }
     cout<< gcd <<endl;
}
