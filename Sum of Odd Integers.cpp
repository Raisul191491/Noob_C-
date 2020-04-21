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
          long long int n,k;
          cin>>n>>k;
          if(k*k<=n && n%2==k%2)
               cout << "YES\n";
          else
               cout << "NO\n";
     }
}
