#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
#define dom(n) for(int j=0;j<n;j++)
#define mom(n) for(int i=n;i>=0;i--)
using namespace std;
int main()
{
     int ind=0,x=1;
     string s;
     cin>>s;
     mom(s.size()-1)
     {
          if(s[i]=='7')
               ind+=pow(2,x);
          else
               ind+=(pow(2,x)-pow(2,x-1));
          x++;

     }
     cout << ind <<endl;
}
