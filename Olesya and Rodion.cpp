#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     long long int n,t,digit;
     cin>>n>>t;
     if(n==1 && t==10)
          cout << "-1\n";
     else
     {
          cout <<t;
          if(t==10) n--;
          com(i,n-1)
          {
               cout << "0";
          }
     }
}
