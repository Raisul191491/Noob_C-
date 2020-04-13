#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a,even=0,odd=0;
     cin>>n;
     vector<int>nes;
     while(n--)
     {
          cin>>a;
          nes.push_back(a);
          if(a%2==0)
          {
               even++;
          }
          else
               odd++;
     }
     for(int i=0;i<nes.size();i++)
     {
          if(even==1)
          {
               if(nes[i]%2==0)
                    cout<< i+1 <<endl;
          }
          else if(odd==1)
          {
               if(nes[i]%2!=0)
                    cout<< i+1 <<endl;
          }
     }
}
