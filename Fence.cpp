#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n,k,x=0;
     vector<pair<long long,int>>mn;
     cin>>n>>k;
     long long a[n+1]={0};
     for(int i=1;i<=n;i++)
     {
          cin>>a[i];
          a[i]+=a[i-1];
     }
     for(int i=k;i<=n;i++)
     {
          mn.push_back({a[i]-a[x],x+1});
          x++;
     }
     sort(mn.begin(),mn.end());
     cout << mn[0].second << endl;
}
