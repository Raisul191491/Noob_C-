#include<bits/stdc++.h>
typedef long long     ll;
typedef unsigned long long     ull;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
map<ll,ll>a;
void solve()
{
    int n,flag=0;
    cin>>n;
    vector<int>con;
    int a[2*n+1]={0};
    map<int,int>mon;
    dom(i,n)
    {
        int x;
        cin>>x;
        mon[i]=x;
        a[x]=1;
    }
    dom(i,n)
    {
        for(int j=mon[i]+1; j<=2*n; j++)
        {
            if(a[j]==0)
            {
                con.push_back(mon[i]);
                con.push_back(j);
                a[j]=1;
                break;
            }
        }
    }
    if(con.size()!=2*n)
        cout << "-1";
    else
    {
        com(i,con.size())
        {
            cout << con[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

