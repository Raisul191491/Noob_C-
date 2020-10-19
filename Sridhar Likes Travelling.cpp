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
        int n,cost=0,flag=0;
        cin>>n;
        map<string,pair<string,string>>pos;
        map<string,int>mp;
        com(i,n-1)
        {
            string s,t,u;
            cin>>s>>t>>u;
            int l=u.size(),sum=0,x=0;
            while(x<l-1)
            {
                sum=sum*10+(u[x]-'0');
                x++;
            }
            mp[s]++;
            mp[t]++;
            pos[s]= {t,u};
            cost+=sum;
        }
        string pp;
        for(auto x:mp)
        {
            if(x.second==1)
                pp=x.first;
            while(pos.find(pp)!=pos.end())
            {
                pair<string,string>xp=pos[pp];
                cout << pp<<" "<< xp.first << " " << xp.second << endl;
                pp=xp.first;
                flag=1;
            }
            if(flag)
                break;
        }
        cout << cost << "$" << endl;
    }
}
