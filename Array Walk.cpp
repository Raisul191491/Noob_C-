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
    while(t--)
    {
        int n,k,z;
        cin>>n>>k>>z;
        int a[n],pos;
        int sum=0,cum=0,fans=0;
        com(i,n)
        {
            cin>>a[i];
        }
        for(int i=0; i<=z; i++)
        {
            pos=k-i*2;
            cum=0;
            sum=0;
            for(int j=0; j<=pos; j++)
            {
                 sum+=a[j];
                 if(j<n-1)
                    cum=max(cum,a[j]+a[j+1]);
            }
            fans=max(fans,sum+cum*i);
        }
        cout << fans << endl;
    }
}
