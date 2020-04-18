#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     long long int n,odd=0,x,sum=0;
     cin>>n;
     vector<long long int>od;
     com(i,n)
     {
          cin>>x;
          if(x%2==0)
               sum+=x;
          else
          {
               od.push_back(x);
               odd++;
          }
     }
     sort(od.begin(),od.end(),greater<int>());
     x=(odd/2)*2;
     com(i,x)
     {
          sum+=od[i];
     }
     cout << sum <<endl;
}
