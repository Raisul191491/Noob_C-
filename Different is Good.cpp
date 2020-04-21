#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=1;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int n,change=0,x;
     string s;
     cin>>n>>s;
     set<int>str;
     com(i,s.size())
     {
          str.insert(s[i]);
     }
     x=26-str.size();
     if(x>=n-str.size())
          cout << n-str.size() <<endl;
     else
          cout << "-1\n";
}
