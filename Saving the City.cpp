#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fr            first
#define sc            second
#define lcm(a,b)      (a*b)/__gcd(a,b)
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
#define endl          '\n'
using namespace std;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          int a,b,spend=0,one=0;
          cin>>a>>b;
          string s;
          cin>>s;
          vector<int>cnt;
          int gun=0,beg=0;
          while(s[beg]=='0')
               beg++;
          for(int i=beg;i<s.length();i++)
          {
               if(s[i]=='1')
               {
                    one=1;
                    if(gun>0)
                         cnt.push_back(gun);
                    gun=0;
               }
               else
                    gun++;
          }
          if(cnt.size()==0 && one==0){
               cout << spend << endl;
               continue;
          }
          spend=(cnt.size()+1)*a;
          com(i,cnt.size())
          {
               if((spend-a+cnt[i]*b)<=spend)
                    spend=spend-a+cnt[i]*b;
          }
          cout << spend << endl;
     }
}
