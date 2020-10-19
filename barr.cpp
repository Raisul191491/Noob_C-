#include<bits/stdc++.h>
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
     int n,cnt=0;
     cin>>n;
     string s;
     cin.ignore();
     com(i,n)
     {
          getline(cin,s);
          if(s=="ABSINTH"||s=="BEER"||s=="BRANDY"||s=="CHAMPAGNE"||s=="GIN"||s=="RUM"||s=="SAKE"||s=="TEQUILA"||s=="VODKA"||s=="WHISKEY"||s=="WINE")
               cnt++;
          else if(s=="0"||s=="1"||s=="2"||s=="3"||s=="4"||s=="5"||s=="6"||s=="7"||s=="8"||s=="9"||s=="10"||s=="11"||s=="12"||s=="13"||s=="14"||s=="15"||s=="16"||s=="17")
               cnt++;
     }
     cout << cnt << endl;
}
