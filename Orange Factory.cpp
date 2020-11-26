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
    ll m,n,sum=0;
    cin>>m>>n;
    ll a[m];

    com(i,m)
    {
        cin>>a[i];
        sum+=a[i];
    }

    if(sum<=n)
    {
        cout << "Sorry, we can only supply " << sum-1 << " oranges" << endl;
        com(i,m-1)
        {
             cout << a[i] << " " << a[i] << " 0" << endl;
        }
        cout << a[m-1] << " " << a[m-1]-1 << " 1" << endl;
    }
    else
    {
         cout << "Thank you, your order for " << n << " oranges are accepted" << endl;
         com(i,m)
         {
              cout << a[i] << " " << min(a[i],n) << " " << a[i]-min(a[i],n) << endl;
              n-=min(a[i],n);
         }
    }
}
