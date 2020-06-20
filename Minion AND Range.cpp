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
int main()
{
    ll t;
    cin>>t;
    com(i,t)
    {
        ll n,q;
        cin>>n;
        ll a[n+1],b[n+1]= {0};
        dom(i,n)
        {
            cin>>a[i];
            if(a[i]%2)
            {
                b[i]=b[i-1];
            }
            else
            {
                b[i]=b[i-1]+1;
            }
        }
        cin>>q;
        com(i,q)
        {
            ll l,r;
            cin>>l>>r;
            if(a[l]%2==0 || a[r]%2==0)
                cout << "EVEN" << endl;
            else
            {
                ll dif=b[r]-b[l];
                if(dif)
                    cout << "EVEN"<< endl;
                else
                    cout << "ODD" << endl;
            }
        }

    }
}
