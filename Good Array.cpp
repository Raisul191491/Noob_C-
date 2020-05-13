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
     long long int n,sum=0;
     cin>>n;
     vector<pair<long long int,int>>num;
     vector<int>pos;
     com(i,n)
     {
          int x;
          cin>>x;
          num.push_back(make_pair(x,i+1));
          sum+=x;
     }
     sortvi(num);
     com(i,n)
     {
          if(i<n-1&&sum-num[i].first==2*num[n-1].first)
               pos.push_back(num[i].second);
          else if(i==n-1&&sum-num[i].first==2*num[n-2].first)
               pos.push_back(num[i].second);
     }
     if(pos.size()!=0)
     {
          cout << pos.size() << endl;
          for(int a:pos)
               cout << a << " ";
     }
     else
          cout << 0 << endl << "" << endl;
}
