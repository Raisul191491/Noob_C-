#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     string fac;
     cin>>fac;
     vector<int>cou;
     for(int i=0;i<n;i++)
     {
          if(fac[i]=='2')
          {
               cou.push_back(2);
          }
          if(fac[i]=='3')
          {
               cou.push_back(3);
          }
          if(fac[i]=='4')
          {
               cou.push_back(3);
               cou.push_back(2);
               cou.push_back(2);
          }
          if(fac[i]=='5')
          {
               cou.push_back(5);
          }
          if(fac[i]=='6')
          {
               cou.push_back(5);
               cou.push_back(3);
          }
          if(fac[i]=='7')
          {
               cou.push_back(7);
          }
          if(fac[i]=='8')
          {
               cou.push_back(7);
               cou.push_back(2);
               cou.push_back(2);
               cou.push_back(2);
          }
          if(fac[i]=='9')
          {
               cou.push_back(7);
               cou.push_back(3);
               cou.push_back(3);
               cou.push_back(2);
          }
     }
     sort(cou.begin(),cou.end(),greater<int>());
     for(int i=0;i<cou.size();i++)
          cout<< cou[i];
}
