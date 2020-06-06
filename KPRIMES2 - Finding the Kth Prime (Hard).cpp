#include<bits/stdc++.h>
typedef long long     ll;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
bool prime[10000001];
vector<ll>odd;
int main()
{
    int t,cnt=0;
    cin>>t;
    dom(i,10000000)
    {
        prime[i]=true;
    }
    prime[1]=false;
    for(ll p=2; p*p<=10000000; p++)
    {
        if(prime[p]==true)
        {
            for(ll i=p*2; i<=10000000; i+=p)
                prime[i]=false;
        }
    }
    com(i,t)
    {
        int n,cnt=0;
        cin>>n;
        for(ll i=1; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                if(prime[i]==false)
                {
                    cnt++;
                    //cout << i;
                }
                if(n/i!=i)
                {
                    if(prime[n/i]==false)
                        cnt++;
                    //cout << n/i;
                }
            }
        }
        cout << cnt << endl;
    }
}
