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
        ll w,h,n;
        cin>>w>>h>>n;
        if(w&1 && h&1)
        {
            if(n==1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
               continue;
        }
        ll cnt=0;
        while(w%2==0)
        {
            cnt++;
            w/=2;
        }
        ll ans=1;
        if(cnt)
            ans=pow(2LL,cnt);
        cnt=0;
        while(h%2==0)
        {
            cnt++;
            h/=2;
        }
        if(cnt)
            ans*=pow(2LL,cnt);
        if(ans>=n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
