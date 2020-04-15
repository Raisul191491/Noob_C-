#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;

bool revers(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}

int main()
{
     int n,x,shot=0;
     cin>>n;
     vector<pair<int,int>>seq;
     com(i,n)
     {
          cin>>x;
          seq.push_back(make_pair(x,i+1));
     }
     sort(seq.begin(),seq.end(),revers);
     x=0;
     com(i,seq.size())
     {
          shot+=(seq[i].first*x+1);
          x++;
     }
     cout << shot <<endl;
     com(i,seq.size())
     {
          cout << seq[i].second << " ";
     }
}
