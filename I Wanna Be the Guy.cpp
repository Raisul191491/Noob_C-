#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,p,q,x,total=0;
     cin>>n>>p;
     vector<int>lvl,fir;
     for(int i=1;i<=n;i++)
     {
          lvl.push_back(i);
     }
     for(int i=0;i<p;i++)
     {
          cin>>x;
          fir.push_back(x);
     }
     cin>>q;
     for(int i=0;i<q;i++)
     {
          cin>>x;
          fir.push_back(x);
     }
     sort(fir.begin(),fir.end());
     for(int i=0;i<fir.size();i++)
     {
          if(fir[i]!=fir[i+1])
          {
               total++;
          }
     }
     if(n==total)
          cout << "I become the guy." <<endl;
     else
          cout<< "Oh, my keyboard!" <<endl;
}
