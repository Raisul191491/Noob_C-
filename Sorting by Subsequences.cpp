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
int a[100005];
bool cmp(int x,int y)
{
	return a[x]<a[y];
}
int main()
{
     int n,cnt=0,ran;
     cin>>n;
     int pos[n+1];
     vector<int>beg[n+1];
     dom(i,n)
     {
          cin>>a[i];
          pos[i]=i;
     }
     sort(pos+1,pos+1+n,cmp);
     vector<bool>x(n+1,false);
     dom(i,n)
     {
          if(x[i]) continue;
          cnt++;
          ran=i;
          while(!x[ran])
          {
               x[ran]=true;
               beg[cnt].push_back(ran);
               ran=pos[ran];
          }
     }
     cout << cnt << endl;
     dom(i,cnt)
     {
          cout << beg[i].size() << " ";
          com(j,beg[i].size())
          {
               cout << beg[i][j] << " ";
          }
          cout << endl;
     }
}
