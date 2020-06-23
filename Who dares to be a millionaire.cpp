#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr            first
#define sc            second
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
        int n,cnt=0,mx=-1;
        vector<int>pos;
        //pos.push_back(0);
        cin>>n;
        string s,t;
        cin>>s>>t;
        com(i,n)
        {
            if(s[i]==t[i])
                cnt++;
        }
        int a[n+1];
        com(i,n+1)
        {
            cin>>a[i];
        }
        if(cnt==n)
            mx=a[n];
        else
        {
            com(i,cnt+1)
            {
                mx=max(mx,a[i]);
            }
        }
        cout << mx << endl;
    }
}
