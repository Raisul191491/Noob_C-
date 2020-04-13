#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,s,x,y,flag=1;
     vector<pair<int,int>>drag;
     cin>>s>>n;
     while(n--)
     {
          cin>>x>>y;
          drag.push_back(make_pair(x,y));
     }
     sort(drag.begin(),drag.end());
     for(int i=0;i<drag.size();i++)
     {
          if(s>drag[i].first)
          {
               s=s+drag[i].second;
          }
          else
          {
               flag=0;
               break;
          }
     }
     if(flag==1)
          cout << "YES" <<endl;
     else
          cout<< "NO" <<endl;
}
