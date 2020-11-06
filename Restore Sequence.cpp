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
    bool prime[1000005];
    vector<int>pr;
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=1000005; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=1000005; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=1000005; p++)
        if (prime[p])
            pr.push_back(p);
//     cout << pr.size();
    int t;
    cin>>t;
    com(i,t)
    {
        int n;
        cin>>n;
        int b[n+1],x=0,a[n+1]= {0};

        map<int,int>mp;

        dom(i,n) cin>>b[i];

        dom(i,n)
        {
            if(mp[b[i]])
                a[i]=mp[b[i]];
            else
            {
                mp[b[i]]=pr[x];
                a[i]=mp[b[i]];
                x++;
            }
        }
        dom(i,n)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
