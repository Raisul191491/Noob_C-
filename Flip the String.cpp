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
        string s,t;
        cin>>s>>t;
        int cnt=0;
        vector<int>pos;
        if(s==t)
        {
            cout << 0 << endl;
            continue;
        }
        for(int i=0; i<s.length(); i+=2)
        {
            if(s[i]!=t[i])
                cnt++;
            else
            {
                if(cnt)
                    pos.push_back(cnt);
                cnt=0;
            }
        }
        if(cnt)
            pos.push_back(cnt);
        cnt=0;
        for(int i=1; i<s.length(); i+=2)
        {
            if(s[i]!=t[i])
                cnt++;
            else
            {
                if(cnt)
                    pos.push_back(cnt);
                cnt=0;
            }
        }
        if(cnt)
            pos.push_back(cnt);
        cnt=0;

        cout << pos.size() << endl;
    }
}