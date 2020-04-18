#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          long long int n,two=0,mul=1,sum;
          cin>>n;
          sum=n*(n+1)/2;
          while(mul<=n)
          {
               two+=mul;
               mul*=2;
          }
          cout << sum-two*2 <<endl;
     }
}
