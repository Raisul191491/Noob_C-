#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())

using namespace std;
int main()
{
     long long int n,a,m,pay,x;
     cin>>n;
     vector<int>choc;
     com(i,n)
     {
          cin>>a;
          choc.push_back(a);
     }
     sortvd(choc);
     cin>>m;
     com(i,m)
     {
          cin>>x;
          pay=0;
          pay=accumulate(choc.begin(),choc.end(),pay)-choc[x-1];
          cout << pay << endl;
     }
}
