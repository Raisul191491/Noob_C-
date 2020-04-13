#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,t;
     int j=0,pos=1;
     cin>>s>>t;
     for(int i=0;i<t.size();i++)
     {
          if(t[i]==s[j])
          {
               j++;
               pos++;
          }
     }
     cout<< pos <<endl;
}
