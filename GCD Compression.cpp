#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
using namespace std;
map<pair<ll,ll>,ll>mp;
int main()
{
     int t;
     cin>>t;
     com(i,t)
     {
          int n,x,cnt,y=0;
          cin>>n;
          cnt=n-1;
          vector<ll>odd,eve;
          com(i,2*n)
          {
               cin>>x;
               if(x&1)
                    odd.push_back(i+1);
               else
                    eve.push_back(i+1);
          }
          int l=odd.size(),r=eve.size();
          while(l>1 && cnt>0)
          {
               cout << odd[y] << " " << odd[y+1] << endl;
               y+=2;
               cnt--;
               l-=2;
               //cout << cnt << endl;
          }
          y=0;
          while(r>1 && cnt>0)
          {
               cout << eve[y] << " " << eve[y+1] << endl;
               y+=2;
               cnt--;
               r-=2;
          }
     }
}
