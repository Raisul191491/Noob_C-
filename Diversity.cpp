#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
     int l,k,m;
     string s;
     cin>>s;
     cin>>k;
     vector<char>nex;
     l=s.size();
     m=1;
     if(k>l)
     {
          cout << "impossible\n";
          return 0;
     }
     com(i,l)
     {
          nex.push_back(s[i]);
     }
     sort(nex.begin(),nex.end());
     com(i,nex.size()-1)
     {
          if(nex[i]!=nex[i+1])
               m++;
          if(m==26)
               break;
     }
     if(m>=k)
          cout << "0" << endl;
     else
          cout << k-m <<endl;
}
