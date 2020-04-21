#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=1;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     long long int n,m,x,y,z,mini,maxi;
     cin>>n>>m;
     x=n-m+1;
     y=n/m;
     z=n%m;
     maxi=x*(x-1)/2;
     mini=y*(y-1)/2*(m-z)+y*(y+1)/2*z;
     cout << mini << " " << maxi;
}
