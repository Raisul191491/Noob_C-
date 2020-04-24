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
     int n,s;
     cin>>n>>s;
     vector<int>mug;
     com(i,n)
     {
          int x;
          cin>>x;
          mug.push_back(x);
     }
     sortvi(mug);
     com(i,mug.size()-1)
     {
          s-=mug[i];
     }
     cout << (s>=0 ? "YES" : "NO") << endl;
}
