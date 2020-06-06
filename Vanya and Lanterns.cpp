#include<bits/stdc++.h>
typedef long long     ll;
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
     int n,l;
     cin>>n>>l;
     int a[n];
     vector<double>lig;
     com(i,n)
     {
          cin>>a[i];
     }
     sortI(a,n);
     lig.push_back(double(abs(0-a[0])));
     lig.push_back(double(l-a[n-1]));
     for(int i=n-1;i>0;i--)
     {
          lig.push_back((double)(a[i]-a[i-1])/2);
     }
     sortvd(lig);
     cout << fixed << setprecision(10) << lig[0] << endl;
}
