#include<bits/stdc++.h>
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    int n,rem;
    cin>>n;
    vector<int>w,h,v;
    com(i,n)
    {
        int x,y;
        cin>>x>>y;
        w.push_back(x);
        h.push_back(y);
        v.push_back(y);
    }
    int sum=0;
    sum=sumall(w,sum);
    sortvd(v);
    int rem1=v[0],rem2=v[1];
    com(i,n)
    {
         if(h[i]!=rem1)
          cout << (sum-w[i])*rem1 << " ";
         else
          cout << (sum-w[i])*rem2 << " ";
    }
}
