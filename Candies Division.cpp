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
          int n,k,choc=0;
          cin>>n>>k;
          choc=(n/k)*k;
          n=n-(n/k)*k;
          if(n>=k/2)
               choc+=k/2;
          else if(n<k/2)
               choc+=n;

          cout << choc << endl;
     }
}