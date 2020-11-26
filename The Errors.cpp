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
        int n,x;
        cin>>n;
        long double a[n+1],mul=1.0,sum=0.0;
        dom(i,n)
        {
            cin>>a[i];
        }
        int m;
        cin>>m;
        com(i,m)
        {
            cin>>x;
            if(a[x]==0.0)
                continue;
            mul=1;
            dom(j,n)
            {
                if(j!=x)
                {
                    mul*=a[j];
                    if(mul>1000000000.0)
                        break;
                }
            }
            if(mul>1000000000.0 || mul==0.0)
                continue;
            sum+=floor(mul/(long double)pow(a[x],(long double)2));
        }
        cout << "Case #" << i+1 << ": " << sum << endl;
    }
}
