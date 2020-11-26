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
    ll r,c,x=1,mx=0;
    cin>>r>>c;
    map<ll,ll>mp;
    ll a[r+5][c+5];
    ll b[r+5][c+5]={0};

    dom(i,r)
    {
        dom(j,c)
        {
            cin>>a[i][j];

        }
    }

    dom(i,r)
    {
        dom(j,c)
        {
            if(a[i][j]==1)
            {
                if(i==1)
                {
                    if(j>1&&b[i][j-1]>0)
                        b[i][j]=b[i][j-1];
                    else
                    {
                        b[i][j]=x;
                        x++;
                    }

                }
                else
                {
                    if(b[i][j-1]>0)
                        b[i][j]=b[i][j-1];
                    else if(b[i-1][j]>0)
                        b[i][j]=b[i-1][j];
                    else if(b[i-1][j-1]>0)
                        b[i][j]=b[i-1][j-1];
                    else if(b[i-1][j+1]>0)
                        b[i][j]=b[i-1][j+1];
                    else
                    {
                        b[i][j]=x;
                        x++;
                    }
                }
            }
        }
    }
    dom(i,r)
    {
        dom(j,c)
        {
            x=b[i][j];
            //cout << x << ' ';
            if(x>0)
                mp[x]++;
            mx=max(mx,mp[x]);
        }
        //cout << endl;
    }
    cout << mx << endl;
}
