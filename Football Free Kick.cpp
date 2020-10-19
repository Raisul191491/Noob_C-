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
map<ll,ll>mp;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int k,n,q,dafaq=1;
        cin>>n>>k>>q;
        int a[n+2]= {0};
        dom(i,k) a[i]=1;
        com(i,q)
        {
            int x,y;
            cin>>x>>y;
            if(a[x]==a[y])
                cout << dafaq << endl;
            else
            {
                if(a[x]==0)
                {
                    a[x]=1;
                    a[y]=0;
                    if(a[x-1]==1 || a[x+1]==1)
                        dafaq--;
                    else if(a[x-1]==0 && a[x+1]==0)
                        dafaq++;
                    if(a[y-1]==1 && a[y+1]==1)
                        dafaq++;
                }
                else
                {
                    a[y]=1;
                    a[x]=0;
                    if(a[x-1]==1 && a[x+1]==1)
                        dafaq++;
                    if(a[y-1]==1 || a[y+1]==1)
                        dafaq--;
                    else if(a[y-1]==0 && a[y+1]==0)
                        dafaq++;
                }
                cout << dafaq << endl;
            }
        }
    }
}
