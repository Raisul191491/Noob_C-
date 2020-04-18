#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     int n,rom=0;
     cin>>n;
     for(int i=n-1;i<=n;i++)
     {
          rom+=i*i;
     }
     cout << rom <<endl;
}
