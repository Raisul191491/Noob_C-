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
    int n;
    cin>>n;
    ll a[n+1],b[n+1]= {0},sum=0,cnt=0,rem=0;
    dom(i,n)
    {
        cin>>a[i];
        b[i]=a[i];
        cnt+=a[i];
        b[i]+=b[i-1];
    }
    for(int i=n-1;i>=1;i--)
    {
         for(int j=n;j>i;j--)
         {
              //cout << sum << endl;
              if(abs(b[j-1]-b[i-1])<=abs(cnt-(b[j-1]-b[i-1])))
              {
                   sum+=rem+abs(i-j)*a[i];
                   rem=rem+abs(i-j)*a[i];
                   //cout << rem << endl;
                   break;
              }
              else
              {
                   rem-=b[j-1]-b[i];
                   sum+=cnt-(b[j-1]-b[i-1]);
              }
         }
    }
    cout << sum << endl;
}
