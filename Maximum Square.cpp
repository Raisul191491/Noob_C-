#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k,n,a,side=1002;
     cin>>k;
     for(int i=0;i<k;i++)
     {
          cin>>n;
          vector<int>tile,no;
          for(int i=0;i<n;i++)
          {
               cin>>a;
               tile.push_back(a);
          }
          sort(tile.begin(),tile.end(),greater<int>());
          for(int i=0;i<n;i++)
          {
               if((i+1)<=tile[i])
               {
                    side=min((i+1),tile[i]);
                    no.push_back(tile[i]);
               }
          }
          sort(no.begin(),no.end());
          side= min(side,no[0]);
          cout << side <<endl;
     }
}
