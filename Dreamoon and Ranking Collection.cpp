#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,ans;
     cin>>t;
     for(int i=0;i<t;i++)
     {
          int n,x,a;
          vector<int>con;
          cin>>n>>x;
          for(int i=0;i<n;i++)
          {
               cin>>a;
               con.push_back(a);
          }
          sort(con.begin(),con.end());
          for(int i=0;i<con.size()-1;i++)
          {
               if((con[i+1]-con[i])>1 && x!=0)
               {
                    a=con[i]+1;
                    con.insert(con.begin()+(i+1),a);
                    x--;
               }
          }
          for(int i=0;i<con.size()-1;i++)
          {
               if(con[i]+1!=con[i+1])
               {
                    cout << con[i] <<endl;
                    break;
               }
          }
     }
}
