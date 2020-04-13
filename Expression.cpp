#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,eq1,eq2,eq3,eq4,eq5,eq6,ans;
     cin>>a>>b>>c;
     eq1=a+b*c;
     eq2=a*(b+c);
     eq3=(a+b)*c;
     eq4=a*b*c;
     eq5=a*b+c;
     eq6=a+b+c;
     ans=max(max(max(max(max(eq1,eq2),eq3),eq4),eq5),eq6);

     cout<< ans << endl;
}
