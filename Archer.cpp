#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
     double a,b,c,d,p,q;
     cin>>a>>b>>c>>d;
     p=a/b;
     q=(1-a/b)*(1-c/d);
     cout << setprecision(12) << p/(1-q) << endl;
}
