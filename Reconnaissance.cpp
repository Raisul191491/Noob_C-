#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,d,x,total=0;
     cin>>n>>d;
     vector<int>hi;
     while(n--)
     {
          cin>>x;
          hi.push_back(x);
     }
     for(int i=0;i<hi.size();i++)
     {
          for(int j=0;j<hi.size();j++)
          {
               if(abs(hi[i]-hi[j])<=d && i!=j)
                    total++;
          }
     }
     cout<< total << endl;
}
