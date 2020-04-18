#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,z=0,one=0;
     string s;
     cin>>n>>s;
     com(i,s.size())
     {
          if(s[i]=='z')
               z++;
          else if(s[i]=='n')
               one++;
     }
     while(one--)
          cout << "1 ";
     while(z--)
          cout << "0 ";
}

