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
        int n,k,m;
        cin>>n>>k>>m;
        int a[m];

        map<int,int>mp;

        com(i,m)
        {
            cin>>a[i];
        }

        if(k==n)
        {
            if(a[0]==(n+1)/2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            int cnt=0,sc=0;
            dom(i,(n+1)/2)
            {
                if(mp[i]==0)
                    cnt++;
            }
            for(int i=((n+1)/2)+1; i<=n; i++)
            {
                if(mp[i]==0)
                    sc++;
            }
            while(cnt%k==0 && cnt>0)
               cnt/=k;
            while(sc%k==0 && sc>0)
               sc/=k;
            if(cnt+sc+1==k)
               cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
