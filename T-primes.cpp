#include<bits/stdc++.h>
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    int q;
    cin>>q;
    long long int n=1000000,z;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(long long int p=2; p*p<=n; p++)
    {
        if(prime[p]==true)
        {
            for(long long int i=p*p; i<=n; i+=p)
                prime[i]=false;
        }
    }
    vector<long long int>pr;
    for(long long int i=2; i<n; i++)
    {
        if(prime[i]==true)
        {
            z=i*i;
            pr.push_back(z);
        }
    }
    com(i,q)
    {
        long long int x;
        cin>>x;
        if(binary_search(pr.begin(),pr.end(),x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

