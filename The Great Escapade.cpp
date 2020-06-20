#include<bits/stdc++.h>
typedef long long     ll;
using namespace std;
int main()
{
     int n,mon=0;
     cin>>n;
     int a[n+5],b[n+5]={0},c[n+5]={0};
     vector<ll>pos;
     for(int i=1;i<=n;i++)
     {
          cin>>a[i];
          b[i]=b[i-1]+a[i];
          c[i]=a[i];
     }
     int k;
     cin>>k;
     for(int i=n;i>1;i--)
     {
          c[i-1]+=c[i];
     }
     for(int i=0;i<=k;i++)
     {
          pos.push_back(b[k-i]+c[n-i+1]);
     }
     sort(pos.begin(),pos.end(),greater<int>());
     cout << pos[0] << endl;
}
