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

//void printPair(pair<ll,ll>p)
//{
//    int f = p.first;
//    int s = p.second;
//    cout << f << " " << s;
//}

int main()
{
    fast
    int n,x,y,cnt=0;
    cin>>n;
    set<pair<int,int>>s1,s2,s3;
    map<int,int>mp;

    com(i,n)
    {
        cin>>x;
        if(x==1)
        {
            cin>>y;
            cnt++;
            s1.insert({cnt,y});
            s2.insert({-y,cnt});
//            s3.insert({-y,cnt});
            mp[cnt]=y;
        }
        else if(x==2)
        {
            int ins=s1.begin()->first;
            y=mp[ins];
            s1.erase({ins,y});
            s2.erase({-y,ins});
            cout << ins << " ";
        }
        else
        {
            int ins=s2.begin()->second;
            y=mp[ins];
            s1.erase({ins,y});
            s2.erase({-y,ins});
            cout << ins << " ";
        }
    }
//    for(auto v:s3)
//     printPair(v);
}
