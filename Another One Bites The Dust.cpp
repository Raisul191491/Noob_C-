#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c,sum,x;
     cin>>a>>b>>c;
     x=min(a,b);
     sum=x*2+c*2;
     a-=x;
     b-=x;
     if(a>0 || b>0)
     {
          sum++;
     }
     cout << sum << endl;
}
