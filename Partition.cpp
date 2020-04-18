#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,x,B=0,C=0;
     cin>>n;
     vector<int>mi,pl;
     com(i,n)
     {
          cin>>x;
          if(x<0)
               mi.push_back(x);
          else
               pl.push_back(x);
     }
     B= accumulate(pl.begin(),pl.end(),B);
     C= accumulate(mi.begin(),mi.end(),C);
     cout << B-C << endl;
}
