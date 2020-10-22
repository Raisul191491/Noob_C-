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
        int n;
        cin>>n;
        char a[n+1][n+1];
        vector<pair<int,int>>pos;
        dom(i,n)
        {
            dom(j,n)
            {
                cin>>a[i][j];
            }
        }
        if(a[2][1]==a[1][2])
        {
            if(a[n-1][n]==a[1][2])
                pos.push_back({n-1,n});
            if(a[n][n-1]==a[1][2])
                pos.push_back({n,n-1});
        }
        else if(a[n-1][n]==a[n][n-1])
        {
            if(a[1][2]==a[n-1][n])
                pos.push_back({1,2});
            if(a[2][1]==a[n-1][n])
                pos.push_back({2,1});
        }
        else
        {
            if(a[1][2]=='1')
                pos.push_back({1,2});
            if(a[2][1]=='1')
                pos.push_back({2,1});
            if(a[n-1][n]=='0')
                pos.push_back({n-1,n});
            if(a[n][n-1]=='0')
                pos.push_back({n,n-1});
        }
        cout<< pos.size() << endl;
        for(auto x:pos)
            cout<< x.first << " " << x.second << endl;
    }
}
