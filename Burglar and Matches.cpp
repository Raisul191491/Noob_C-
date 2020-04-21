#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,m,tot=0;
     cin>>n>>m;
     vector<pair<int,int>>mat;
     com(i,m)
     {
          int a,b;
          cin>>a>>b;
          mat.push_back(make_pair(b,a));
     }
     sort(mat.begin(),mat.end());
     mom(i,mat.size()-1)
     {
          if(mat[i].second<n)
          {
               tot+=mat[i].first*mat[i].second;
               n-=mat[i].second;
               //cout << tot;
          }
          else
          {
               //cout << n;
               tot+=n*mat[i].first;
               break;
          }
     }
     cout << tot << endl;
}
