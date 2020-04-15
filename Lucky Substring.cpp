#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
#define dom(n) for(int j=0;j<n;j++)
#define mom(n) for(int i=n;i>=0;i--)
using namespace std;
int main()
{
     string s;
     cin>>s;
     int four=0,sev=0;
     com(s.size())
     {
          if(s[i]=='4')
               four++;
          else if(s[i]=='7')
               sev++;
     }
     if(four>=sev && four!=0)
          cout << "4\n";
     else if(sev>four)
          cout<< "7\n";
     else
          cout << "-1\n";
}
