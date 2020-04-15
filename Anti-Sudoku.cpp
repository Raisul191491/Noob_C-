#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
#define dom(n) for(int j=0;j<n;j++)
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(t)
     {
          string s[9];
          com(9)
          {
               cin>>s[i];
          }
          com(9)
          {
               dom(9)
               {
                    if(s[i][j]=='1')
                         cout << "2";
                    else
                         cout << s[i][j];
               }
               cout << endl;
          }
     }
}
