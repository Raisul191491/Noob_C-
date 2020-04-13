#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,d,win=0,cnt=0;
     string s;
     cin>>n>>d;
     for(int i=0;i<d;i++)
     {
          int flag=0;
          cin>>s;
          for(int j=0;j<s.size();j++)
          {
               if(s[j]=='0')
               {
                    flag=1;
                    cnt++;
                    break;
               }
          }
          if(flag==1)
          {
               continue;
          }
          else
          {
               win=max(win,cnt);
               cnt=0;
          }

     }
     win=max(win,cnt);
     cout<< win <<endl;
}
