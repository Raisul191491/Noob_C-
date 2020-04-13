#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,a,m,i,pay=0;
     scanf("%lld",&n);
     vector<int>choc;
     for(i=0;i<n;i++)
     {
          scanf("%lld",&a);
          pay+=a;
          choc.push_back(a);
     }
     sort(choc.begin(),choc.end());
     scanf("%lld",&m);
     for(i=0;i<m;i++)
     {
          scanf("%lld",&a);
          printf("%lld\n",pay-choc[n-a]);
     }
}
