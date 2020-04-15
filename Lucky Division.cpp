#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
#define dom(n) for(int j=0;j<n;j++)
#define mom(n) for(int i=n;i>=0;i--)
using namespace std;
int main()
{
     int num[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
     int n;
     cin>>n;
     com(14)
     {
          if(n%num[i]==0)
          {
               cout << "YES\n";
               return 0;
          }
     }
     cout << "NO\n";
}
