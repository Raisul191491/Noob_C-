#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
     fast
     int t;
     cin>>t;
     while(t--)
     {
          ll a,b,c;
          cin>>a>>b>>c;
          if(a>=c)
          {
               cout << "-1 ";
               cout << b << endl;
          }
          else if(a*b<=c)
          {
               cout << 1 << " -1" << endl;
          }
          else
          {
               cout << 1 << " " << b << endl;
          }
     }
}
